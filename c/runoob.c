#include <stdlib.h>  
#include <stdio.h>
#include <string.h>

// 指针

int max(int x, int y) {
    return x > y ? x : y;
}

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)) {
    for(size_t i = 0;i < arraySize; i++) {
        array[i] = getNextValue();
    }
}

int getNextRandomValue(void) {
    return rand();
}

char str[] = "runoob";

int main() {
    int var_runoob = 1000;
    int *p; // 声明int型指针
    p = &var_runoob; // 指针赋值,&号取地址值
    printf("var_runoob变量地址：%p\n", p);
    printf("p指针对应的值：%d\n", *p);

    int *ptr = NULL;// 指向0地址的空指针
    if (!ptr) {
        // 判断指针是否为NULL
        printf("ptr is NULL\n");
    }

    // 函数指针
    int (*max_r)(int, int) = &max;
    int maxNum = max_r(1,2);
    printf("max num:%d/n", maxNum);

    int myarray[10];
    populate_array(myarray,  10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    int strLen = strlen(str);
    printf("字符串长度：%d\n", strLen);

    return 0;
}