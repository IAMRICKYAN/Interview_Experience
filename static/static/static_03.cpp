#include <iostream>

static int globalVar = 10; // �ļ�������ľ�̬ȫ�ֱ���

static void globalFunc() { // �ļ�������ľ�̬����
    std::cout << "This is a static global function." << std::endl;
}

int a;

int main()
{

    char str[10] = {'1','2','3','1','2','3' ,'1','2','3','\0'};

    std::cout << a << std::endl;
    std::cout << str << std::endl;

    int i = 1;
    std::cout << ++i << i++ << i << i++ << ++i << std::endl;

}


