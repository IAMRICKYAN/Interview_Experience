class MyClass {
public:
    void modify() { /* ... */ }
};


int main()
{
    const MyClass obj;
    MyClass* nonConstPtr = const_cast<MyClass*>(&obj);
    nonConstPtr->modify(); // ���� ���Ե��÷� const ��Ա������

    // ʹ�� const_cast ȥ�� volatile ����
    volatile int vi = 1;
    int* nonVolatilePtr = const_cast<int*>(&vi);
    *nonVolatilePtr = 2; // ���� �����޸� volatile ������


}