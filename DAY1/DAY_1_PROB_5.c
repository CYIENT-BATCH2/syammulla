#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the values:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf(" a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
    a%2==0?printf("a is even\n"):printf("a is odd\n");
    b%2==0?printf("b is even\n"):printf("b is odd\n");
    c%2==0?printf("c is even\n"):printf("c is odd\n");
    d%2==0?printf("d is even\n"):printf("d is odd\n");
    e%2==0?printf("e is even\n"):printf("e is odd\n");
    return 0;
    
}

