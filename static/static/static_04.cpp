#include <iostream>

class Temp {
public:
    // ���캯��
    Temp() {
        N++;
        sum += N;
    }
    // ����ֵ����̬������
    static unsigned int getSum() {
        return sum;
    }
    // ���þ�̬����
    static void reset() {
        N = 0;
        sum = 0;
    }
private:
    // ��̬����������ʽ
    static unsigned int N;
    static unsigned int sum;
};
// ����ʽ
unsigned int Temp::N = 0;
unsigned int Temp::sum = 0;

class Solution {
public:
    int mechanicalAccumulator(int target) {
        Temp::reset();
        Temp* p = new Temp[target];
        delete[] p;
        p = nullptr;
        return Temp::getSum();
    }
};


int main()
{
    Solution sol;
    std::cout << sol.mechanicalAccumulator(100) << std::endl;
 
}