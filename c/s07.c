#include <stdio.h>

int add(int num1, int num2) {
   return num1 + num2; 
}

int operator(int(method)(int, int), int num1, int num2) {
    return method(num1, num2);
}

int main() {
    // 定义数组
	int arr[] = {1,2,3,4};
    int i = 0;
    for (; i < 4; i++)
    {
        printf("数组遍历：%d\n", arr[i]);
    }
    
    // 看一种现象: arr 的值 = arr 去地址的值 ，arr 地址的值 = arr[0]的地址的值（首地址）
	printf("arr = %p\n", arr);
	printf("arr& = %p\n", &arr);
	printf("arr[0]& = %p\n", &arr[0]);

    // 数组指针指向的是数组的首地址
    int* arr_p = arr;
    printf("取值%d\n", *arr_p);
    // 指针++
    arr_p++;
    printf("取值%d\n", *arr_p);

    int num = operator(add,1,2);
    printf("函数指针：%d\n", num);

    return 0;
}