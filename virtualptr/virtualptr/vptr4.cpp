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
        pt = new int[10];
        for (int i = 0; i < 10; i++)
            pt[i] = i;
    }
    virtual ~B() {
        cout << "B::~B() is called" << endl;
        delete[] pt;
    }

    void foo() {
        cout << "B::foo() is called" << endl;
    }

    void fun() {
        cout << "B::fun() is called" << endl;
        cout << pt[0] << endl;
    }

    int* pt;
};

//����ķ�ʽ
//int main(void) {
//    A* a = new A();
//
//    B* b = static_cast<B*>(a); // ��Ҫ��ʾǿ��ת��
//    b->fun();
//
//    delete a;
//
//    return 0;
//}

//��ȷ�ķ�ʽ
int main(void)
{
    A* a = new B();

    B* b = static_cast<B*>(a);
    b->fun();

    delete a;

    return 0;
}