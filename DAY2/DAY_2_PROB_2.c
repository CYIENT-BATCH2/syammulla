#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
     printf("the binary format of given number is:");
    for(int i=7;i>=0;i--)
    {
      
        (1<<i)&num?printf("1"):printf("0");
    }
}
