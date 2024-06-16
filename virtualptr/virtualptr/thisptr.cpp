#include <iostream>

class Base1 {
public:
    Base1() { std::cout << "Base1 constructed!" << std::endl; }
    // 注意：没有虚析构函数
    virtual ~Base1() { std::cout << "Base1 destructed!" << std::endl; }
};

class Base2 {
public:
    Base2() { std::cout << "Base2 constructed!" << std::endl; }
    virtual ~Base2() { std::cout << "Base2 destructed!" << std::endl; }
};

class Derived : public Base1, public Base2 {
public:
    Derived() { std::cout << "Derived constructed!" << std::endl; }
    ~Derived() { std::cout << "Derived destructed!" << std::endl; }
};

int main() {
    Base1* base1ptr = new Derived();
    Base2* base2ptr = reinterpret_cast<Base2*>(base1ptr);

    delete base1ptr; // 使用Base1指针删除Derived对象

    return 0;
}
