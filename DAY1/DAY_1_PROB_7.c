#include<stdio.h>
int main()
{
     long int num,rem,sum=0,temp;
    printf("enter the 10 digit number:");
    scanf("%ld",&num);
    temp=num;
    ABC:
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
        if(temp>0)
        goto ABC;
        sum==num?printf("the given number is a palindrome number\n"):printf("the given number is not a palindrome number\n");

}

