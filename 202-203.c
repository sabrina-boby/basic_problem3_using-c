#include<stdio.h>

void hishab(double base,double exp)
{
    double result=1,i;
    for(i=0; i<exp; i++)
    {
        result=result*base;
    }
    printf("your result = %.2lf",result);
}

int main()
{
    double base,exp;
    printf("enter base :");
    scanf("%lf",&base);
    printf("enter exp :");
    scanf("%lf",&exp);
    hishab(base,exp);
}
