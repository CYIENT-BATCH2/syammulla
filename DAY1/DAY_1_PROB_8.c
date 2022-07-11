#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("the ASCII value of given character =%d",ch):0;
}
