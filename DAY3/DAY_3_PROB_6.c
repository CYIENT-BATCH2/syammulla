#include<stdio.h>
int main()
{
    int num,i;
    printf("enter hex decimal number:");
    scanf("%x",&num);
    printf("value before right shift--> %x\n",num);
    printf("enter the i value:");
    scanf("%d",&i);
    num=num>>i;
    printf("value after right shift--> %x\n",num);
    return 0;
}
    
