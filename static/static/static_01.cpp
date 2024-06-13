#include <iostream>

class MyClass {
private:
    static int staticVar; // ��̬��Ա����
    int nonStaticVar; // �Ǿ�̬��Ա����

public:
    MyClass(int val) : nonStaticVar(val) {}

    static void staticFunc() { // ��̬��Ա����
        // ����û��thisָ�룬���ܷ���nonStaticVar
        std::cout << "Static variable value: " << staticVar << std::endl;
    }

    void nonStaticFunc() { // �Ǿ�̬��Ա����
        std::cout << "Non-static variable value: " << nonStaticVar << std::endl;
    }
};

int MyClass::staticVar = 10; // ��̬��Ա�����Ķ���ͳ�ʼ��

int main() {
    MyClass obj(20);
    obj.nonStaticFunc(); // ����Ǿ�̬��Ա������ֵ

    MyClass::staticFunc(); // ���þ�̬��Ա����
    return 0;
}
