#include <stdio.h>

/*通过指针修改变量值*/
void change(int* p) {
    *p = 200;
}

/*交换两个变量的值*/
void changeT(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i = 100;
	double d = 200;
	float f = 200;
	long l = 100;
	short s = 100;
	char c = 'D';

    printf("i的值是：%d\n", i);
    printf("d的值是：%lf\n", d);
    printf("f的值是：%f\n", f);
    printf("l的值是：%ld\n", l);
    printf("s的值是：%d\n", s);
    printf("c的值是：%c\n", c);
    printf("int类型所占的字节数：%lu\n",sizeof(int));
    // &<变量>：取地址值
    printf("i的地址是：%p\n", &i);
    // *<地址值>：取地址值存储的值
    printf("i的值是：%d\n",*(&i));

    int* p = &i;
    change(p);
    printf("i的值是：%d\n", i);

    int a = 100;
    int b = 200;
    changeT(&a, &b);
    printf("a,b的值分别为%d %d\n",a,b);


    return 0;
}