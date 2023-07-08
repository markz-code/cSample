#include <stdio.h>
#define LENGTH(array) (sizeof(array)/sizeof(array[0]))
 
 double balance[5] = {100.0,2.0,3};

 // 枚举
 enum DAY {
     MON = 1, TUE, WED, THU, FRI, SAT, SUN
 };

int main()
{
   /* 我的第一个 C 程序 */
   printf("Hello, World! \n");

   for (int i = 0; i < 100; i++) {
       printf("for i:%d\n",i);
   }

   // 访问数组
   int length = LENGTH(balance);
   printf("banlance array length: %d\n", length);

   // 枚举
   enum DAY day;
   day = WED;
   printf("ennm:%d\n", day);
   
   return 0;
}