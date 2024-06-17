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
    a->foo();     // ��� "B::foo() is called"
    // a->fun();  // ����fun����A�ĳ�Ա
    // a->fun1(); // ����fun1����A�ĳ�Ա

    delete a;

    return 0;
}
