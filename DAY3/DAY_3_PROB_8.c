#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    ((ch>='a'||ch>='A')&&(ch<='z'||ch<='Z'))?printf("the entered character is an alphabet\n"):printf("the entered charcter is not an alphabet\n");
    return 0;
}
