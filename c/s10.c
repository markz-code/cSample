#include<stdio.h>
#include<string.h>
// #include <malloc.h>

// 结构体&联合体&枚举

enum ENUM {
    TEXT, IMAGE
};

union Student
{
    char name[10];
    int age;
    double salaery;
};


struct Worker
{
    char name[10];
    int age;
    double salaery;
} darren = {"Darren",23,1000}, jack;

int main() {

    return 0;
}