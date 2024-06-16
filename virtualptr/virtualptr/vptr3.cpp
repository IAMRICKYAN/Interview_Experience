#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A::A() is called" << endl; }
    virtual ~A() { cout << "A::~A() is called" << endl; }

    virtual void foo() {
        cout << "A::foo() is called" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "B::B() is called" << endl;
    }
    virtual ~B() {
        cout << "B::~B() is called" << endl;
    }

    void foo() {
        cout << "B::foo() is called" << endl;
    }

    void fun() {
        cout << "B::fun() is called" << endl;
    }
};

int main(void) {
    A* a = new A();

    B* b = static_cast<B*>(a); // 显示强制转换
    b->fun();

    delete b;

    return 0;
}
