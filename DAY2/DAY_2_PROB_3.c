#include<stdio.h>
int main()
{
    int students;
    printf("enter the number of students:");
    scanf("%d",&students);
    printf("total no_of_handshakes =%d\n",students*(students-1));
    return 0;
}
