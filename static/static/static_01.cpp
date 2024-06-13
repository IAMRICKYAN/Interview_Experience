#include <iostream>

class MyClass {
private:
    static int staticVar; // 静态成员变量
    int nonStaticVar; // 非静态成员变量

public:
    MyClass(int val) : nonStaticVar(val) {}

    static void staticFunc() { // 静态成员函数
        // 由于没有this指针，不能访问nonStaticVar
        std::cout << "Static variable value: " << staticVar << std::endl;
    }

    void nonStaticFunc() { // 非静态成员函数
        std::cout << "Non-static variable value: " << nonStaticVar << std::endl;
    }
};

int MyClass::staticVar = 10; // 静态成员变量的定义和初始化

int main() {
    MyClass obj(20);
    obj.nonStaticFunc(); // 输出非静态成员变量的值

    MyClass::staticFunc(); // 调用静态成员函数
    return 0;
}
