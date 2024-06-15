#include <iostream>

class Base
{
public:
	virtual void f() = 0;  //��������ѡ�����ඨ�����ṩʵ�֣������ұ��뽫�䶨��Ϊ���麯��
};

class Derived : public Base
{
public:
	void f() override {}
};

int main()
{
	//b ������Ϊָ�� Base ���͵�ָ�룬�������������� Derived ���͵Ķ���
	//������ȫ�Ϸ��ģ���Ϊ�����������Ա�����ָ����ָ��
	Base* b = new Derived();
	Derived* d = dynamic_cast<Derived*> (b); //��ȫ������ת��

	if (d) {
		// ת���ɹ���d ָ�� Derived ����
		std::cout << "�ɹ�" << std::endl;
	}
	else {
		// ת��ʧ�ܣ�b ��ָ�� Derived ����
		std::cout << "ʧ��" << std::endl;
	}

}
