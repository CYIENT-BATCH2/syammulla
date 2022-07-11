#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    num>=1&&num<=26?printf("%c\n",num+96):printf("the given number is not in range\n");
    return 0;
}

