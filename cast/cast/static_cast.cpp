int a = 10;
char c = static_cast<char>(a); // int �� char ��ת��

class Base {};
class Derived : public Base {};

Derived* d = new Derived();
Base* b = static_cast<Base*>(d); // Derived* �� Base* ��ת��

