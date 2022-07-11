#include<stdio.h>
int main()
{
    int p1,p2,p3;
    printf("enter the values:");
    scanf("%d%d%d",&p1,&p2,&p3);
    p1>p2&&p1>p3?printf("p1 is heavier"):0;
    p2>p1&&p2>p3?printf("p2 is heavier"):0;
    p3>p1&&p3>p2?printf("p3 is heavier"):0;
    return 0;
}
