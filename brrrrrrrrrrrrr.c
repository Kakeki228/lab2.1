#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x;
    double y;
    printf("Enter x:");
    scanf("%lf", &x);
    if (-3<=x && x<0)
    {
        y=abs(x+4)-abs(pow(x,3)-4);
    }else if (9<=x && x<15)
    {
        y = 2*x;
    }else if (27<=x && x<50)
    {
        y = x/(pow(cos(x),2)+1);
    }else{
        y = (x/4)+(sin(x)/3);
    }
    
    
    printf(" \ny = %lf", y);
}