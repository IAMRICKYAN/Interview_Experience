#include <stdio.h>
#include <stdlib.h>

int main() {
    // 请求分配 100 字节的内存
    int* data = (int*)malloc(100);

    if (data == NULL) {
        fprintf(stderr, "分配内存失败\n");
        return 1;
    }

    // 使用分配的内存
    for (int i = 0; i < 25; ++i) {
        data[i] = i;
    }

    // 打印前 10 个整数的值
    for (int i = 0; i < 10; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // 释放内存
    free(data);

    return 0;
}
