#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A::A() is called" << endl; }
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
};

int main(void) {
    A* a = new B();
    a->foo();     // Êä³ö "B::foo() is called"

    delete a;

    return 0;
}
