#include <iostream>
#include <cstdlib> // ����malloc��free

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass constructed" << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass destructed" << std::endl;
    }

    // ����new[]������
    static void* operator new[](size_t size) {
        std::cout << "MyClass::operator new[] called with size " << size << std::endl;
        void* p = std::malloc(size);
        if (!p) {
            throw std::bad_alloc(); // �������ʧ�ܣ��׳��쳣
        }
        return p;
        }

    // ����delete[]������
        static void operator delete[](void* p) noexcept {
        std::cout << "MyClass::operator delete[] called" << std::endl;
        std::free(p);
        }

    // ����nothrow�汾��new[]������
        static void* operator new[](size_t size, const std::nothrow_t& nothrow_value) noexcept {
        std::cout << "MyClass::operator new[] (nothrow) called with size " << size << std::endl;
        void* p = std::malloc(size);
        return p; // ע�⣺nothrow�汾��Ӧ���׳��쳣
        }

    // ����nothrow�汾��delete[]������
        static void operator delete[](void* p, const std::nothrow_t& nothrow_value) noexcept {
        std::cout << "MyClass::operator delete[] (nothrow) called" << std::endl;
        std::free(p);
        }
};


void* operator new(size_t size)
{
    void* p = malloc(size);
    if (p == nullptr)
    {
        throw std::bad_alloc();
    }

    return p;
}


void* operator new[](size_t size)
{
    void* p = malloc(size);
    if (p == nullptr)
    {
        throw std::bad_alloc();
    }
    return p;
}


void operator delete(void* p) noexcept {
    free(p);
}

void operator delete[](void* p) noexcept {
    free(p);
}


int main() {

    int* p = new int;
    delete p;


    // ʹ�����ص�new[]��delete[]
    MyClass* myArray = new MyClass[5];
    delete[] myArray;

    // ʹ��nothrow�汾��new[]��delete[]
    MyClass* myArrayNoThrow = new (std::nothrow) MyClass[5];
    delete[] myArrayNoThrow;

    return 0;
}
