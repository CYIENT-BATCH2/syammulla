#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%x",&num);
    num=num>>3;
    printf("%x\n",num);
    return 0;
}
