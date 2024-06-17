#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A::A() is called" << endl; };
    ~A() { cout << "A::~A() is called" << endl; }

    virtual void foo() {
        cout << "A::foo() is called" << endl;
    }
};

class B : public A {
public:
    B() { cout << "B::B() is called" << endl; }
    ~B() { cout << "B::~B() is called" << endl; }

    void foo() {
        cout << "B::foo() is called" << endl;
    }

    void fun() {
        cout << "B::fun() is called" << endl;
    }

    virtual void fun1() {
        cout << "B::fun1() is called" << endl;
    }
};

int main(void) {
    A* a = new B();
    a->foo();     // 输出 "B::foo() is called"
    // a->fun();  // 错误，fun不是A的成员
    // a->fun1(); // 错误，fun1不是A的成员

    delete a;

    return 0;
}
