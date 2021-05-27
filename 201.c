#include<stdio.h>
double triangle(double a,double b);
int main()
{
    double base,hight;
    printf("enter base & hight : ");
    scanf("%lf %lf",&base,&hight);

    double d=triangle(base,hight);
    printf("triangle is : %.2lf",d);
}

double triangle(double a,double b)
{
   return 0.5 * a * b;
}
