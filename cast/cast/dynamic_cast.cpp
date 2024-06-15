#include <iostream>

class Base
{
public:
	virtual void f() = 0;  //在这里我选择在类定义外提供实现，所以我必须将其定义为纯虚函数
};

class Derived : public Base
{
public:
	void f() override {}
};

int main()
{
	//b 被声明为指向 Base 类型的指针，但是它被分配了 Derived 类型的对象。
	//这是完全合法的，因为派生类对象可以被基类指针所指向。
	Base* b = new Derived();
	Derived* d = dynamic_cast<Derived*> (b); //安全的向下转换

	if (d) {
		// 转换成功，d 指向 Derived 对象
		std::cout << "成功" << std::endl;
	}
	else {
		// 转换失败，b 不指向 Derived 对象
		std::cout << "失败" << std::endl;
	}

}
