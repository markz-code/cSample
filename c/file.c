#include <stdio.h>

int main() 
{
    FILE *fp = NULL;
    fp = fopen("./temp.txt","w+");
    fprintf(fp, "hello world\n");
    fputs("this is test2\n",fp);
    fclose(fp);
    return 0;
}