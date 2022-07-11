#include<stdio.h>
int main()
{
    int min=1990,max=2022,year;
  AB:  year=min;
       (year%4==0||year%400==0)&&(year%100!=0)?printf("%d\n",year):0;
       min++;
       if(min<max)
       goto AB;
    
}
