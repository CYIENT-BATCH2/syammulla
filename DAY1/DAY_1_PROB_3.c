
#include <stdio.h>
#define PI 3.14
int main() {
    // Write C code here
    int r;
    float b;
    printf("enter the radius:");
    scanf("%d",&r);
    b= PI*r*r;
    printf("the total grass covered by area is %.2f\n",b);
    
    return 0;
}

