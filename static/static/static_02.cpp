#include <iostream>


void func() {
    static int count = 0; // �ֲ���̬����
    count++;
    std::cout << count << std::endl;
}

extern int globalVar;

int main() {
    func(); // ���: 1
    func(); // ���: 2

    std::cout << globalVar << std::endl;
    return 0;
}
