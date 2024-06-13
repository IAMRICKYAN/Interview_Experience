#include <iostream>

static int globalVar = 10; // 文件作用域的静态全局变量

static void globalFunc() { // 文件作用域的静态函数
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


