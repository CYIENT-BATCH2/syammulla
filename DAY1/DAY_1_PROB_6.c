#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,temp;
    n1=1,n2=2,n3=4,n4=3,n5=5,n6=7,n7=6,n8=8,n9=9;
    LOOP:
        if(n1>n2)
        {
          temp=n1;
          n1=n2;
          n2=temp;
          goto LOOP;
        }
        if(n2>n3)
        {
            temp=n2;
            n2=n3;
            n3=temp;
            goto LOOP;
        }
        if(n3>n4)
        {
            temp=n3;
            n3=n4;
            n4=temp;
            goto LOOP;
        }
        if(n4>n5)
        {
            temp=n4;
            n4=n5;
            n5=temp;
            goto LOOP;
        }
        if(n5>n6)
        {
            temp=n5;
            n5=n6;
            n6=temp;
            goto LOOP;
        }
        if(n6>n7)
        {
            temp=n6;
            n6=n7;
            n7=temp;
            goto LOOP;
        }
        if(n7>n8)
        {
            temp=n7;
            n7=n8;
            n8=temp;
            goto LOOP;
        }
        if(n8>n9)
        {
            temp=n8;
            n8=n9;
            n9=temp;
            goto LOOP;
        }
        printf("%d %d %d %d %d %d %d %d %d\n",n1,n2,n3,n4,n5,n6,n7,n8,n9);
        return 0;
}
