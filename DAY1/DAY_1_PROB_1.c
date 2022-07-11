#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    (num%11==0||num%11==1)?printf("%d is special number",num):printf("%d is not a special\n",num);
    return 0;
}

