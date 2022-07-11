#include<stdio.h>
int main()
{
    int temp,i,n,cnt=0,result=0,j;
    printf("enter the total number of tickects:");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        temp=i;
        while(temp>0)
        {
            j=temp%10;
            if(j==3)
            {
                cnt++;
            }
            temp/=10;
            
        }    
            if(cnt>=1)
            {
                result++;
            }
        
        cnt=0;
    }
    printf("%d\n",result);
    return 0;
}

