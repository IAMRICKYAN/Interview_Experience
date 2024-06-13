#include <iostream>
#include <cstdlib> // 用于malloc和free

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass constructed" << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass destructed" << std::endl;
    }

    // 重载new[]操作符
    static void* operator new[](size_t size) {
        std::cout << "MyClass::operator new[] called with size " << size << std::endl;
        void* p = std::malloc(size);
        if (!p) {
            throw std::bad_alloc(); // 如果分配失败，抛出异常
        }
        return p;
        }

    // 重载delete[]操作符
        static void operator delete[](void* p) noexcept {
        std::cout << "MyClass::operator delete[] called" << std::endl;
        std::free(p);
        }

    // 重载nothrow版本的new[]操作符
        static void* operator new[](size_t size, const std::nothrow_t& nothrow_value) noexcept {
        std::cout << "MyClass::operator new[] (nothrow) called with size " << size << std::endl;
        void* p = std::malloc(size);
        return p; // 注意：nothrow版本不应该抛出异常
        }

    // 重载nothrow版本的delete[]操作符
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


    // 使用重载的new[]和delete[]
    MyClass* myArray = new MyClass[5];
    delete[] myArray;

    // 使用nothrow版本的new[]和delete[]
    MyClass* myArrayNoThrow = new (std::nothrow) MyClass[5];
    delete[] myArrayNoThrow;

    return 0;
}
