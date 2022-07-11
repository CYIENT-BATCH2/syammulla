#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    printf("enter the values:");
    scanf("%d%d",&a,&b);
    i=a&&b;
    j=a||b;
    k=~a;
    printf("i=%d j=%d k=%d\n",i,j,k);
    return 0;
}
