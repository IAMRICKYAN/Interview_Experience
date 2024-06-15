class MyClass {
public:
    void modify() { /* ... */ }
};


int main()
{
    const MyClass obj;
    MyClass* nonConstPtr = const_cast<MyClass*>(&obj);
    nonConstPtr->modify(); // 现在 可以调用非 const 成员函数了

    // 使用 const_cast 去除 volatile 特性
    volatile int vi = 1;
    int* nonVolatilePtr = const_cast<int*>(&vi);
    *nonVolatilePtr = 2; // 现在 可以修改 volatile 变量了


}