#include<stdio.h>
int main()
{
    int num,i=7;
    printf("enter the number:");
    scanf("%d",&num);
    printf("hexa decimal=%x\n",num);
    printf("the binary format of given number:");
    AD:
        (num>>i)&1?printf("1"):printf("0");
        if(i>0)
        {
            i--;
            goto AD;
        }
        return 0;
}


