#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf",area);
}
