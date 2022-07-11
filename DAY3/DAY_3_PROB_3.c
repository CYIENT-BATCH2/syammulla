#include<stdio.h>
int main()
{
    int num,rem,rev=0,temp;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=100&&num<=999)
    {
    temp=num;
    SG:
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
        if(temp>0)
        {
            goto SG;
        }
        printf("\n reverse number of given number is %d\n",rev);
    }
    else
    {
        printf("the given number is not a 3 digit number");
    }
        return 0;
}
