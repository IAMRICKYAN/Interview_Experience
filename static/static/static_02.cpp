#include <iostream>


void func() {
    static int count = 0; // 局部静态变量
    count++;
    std::cout << count << std::endl;
}

extern int globalVar;

int main() {
    func(); // 输出: 1
    func(); // 输出: 2

    std::cout << globalVar << std::endl;
    return 0;
}
