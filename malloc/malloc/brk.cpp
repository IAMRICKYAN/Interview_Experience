#include <stdio.h>
#include <stdlib.h>

int main() {
    // ������� 100 �ֽڵ��ڴ�
    int* data = (int*)malloc(100);

    if (data == NULL) {
        fprintf(stderr, "�����ڴ�ʧ��\n");
        return 1;
    }

    // ʹ�÷�����ڴ�
    for (int i = 0; i < 25; ++i) {
        data[i] = i;
    }

    // ��ӡǰ 10 ��������ֵ
    for (int i = 0; i < 10; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // �ͷ��ڴ�
    free(data);

    return 0;
}
