int a = 10;
char c = static_cast<char>(a); // int 到 char 的转换

class Base {};
class Derived : public Base {};

Derived* d = new Derived();
Base* b = static_cast<Base*>(d); // Derived* 到 Base* 的转换

