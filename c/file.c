#include <stdio.h>

void main() 
{
    FILE *fp = NULL;
    fp = fopen("./temp.txt","w+");
    fprintf(fp, "hello world\n");
    fputs("this is test\n",fp);
    fclose(fp);
}