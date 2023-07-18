#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dynamiclloc() {
    // 动态申请40M内存空间
    int* arr = malloc(1 * 1024 * 1024 * sizeof(int));

    // 释放内存
    free(arr);
}

void scanf_sample() {
    int num;
    printf("请输入个数：\n");
    scanf("%d", &num);

    // int arr[num];
    int* arr = malloc(sizeof(int)*num);
    int i = 0;
    int print_num;
    for(; i < num; i++) {
        printf("请输入第%d个\n:", i);
        scanf("%d", &print_num);
        arr[i] = print_num;
        printf("%d, %p\n", *(arr + i), arr + i);
    }
    free(arr);

}

void realloc_sample() {
    int num;
	printf("请输入总数：");
	scanf("%d", &num);
    int* arr = (int*)malloc(sizeof(int)*num);
	int i = 0;
	int print_num;
	for (; i < num; i++){
		arr[i] = i;// arr[i] = *(arr+i)指针操作数组
	}
    printf("arr地址%p\n",arr); 

    printf("请输入新数：");
	// 
	int new_num;
	scanf("%d", &new_num);
	// 内存充足的情况下返回原来的地址，新分配的内存可能因为内存不足返回的不是原来的指针地址
    // 扩展的内存
	int* new_arr = (int*)realloc(arr, sizeof(int)*(num+new_num));

    if (new_arr) // = if(new_arr != NULL)
    {
        i = new_num;
        for (; i < (num + new_num); i++){
		    arr[i] = i;// arr[i] = *(arr+i)
	    }
    }
    printf("new_arr地址%p\n",arr);
    
    // 释放前也要进行判断
    if (new_arr)
    {
        free(new_arr);
        new_arr = NULL;
    }
    else 
    {
        free(arr);
    }
    
}

int main() {

    // 指定当前的时间为随机数的变量，每次生成的随机数就可以不一样
    srand((unsigned)time(NULL));
    int i = 0;
    for(; i < 10; i++) {
        // 如果只调用rand()，生成的是伪随机数，每次生成都一样
        printf("%d\n", rand()%100);
    }

    // 静态开辟内存，不需要手动释放
    int arr[5] = {1, 2, 3, 4, 5};
    dynamiclloc();

    // scanf_sample();

    realloc_sample();

    return 0;
}