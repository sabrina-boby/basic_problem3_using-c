#include<stdio.h>
int main()
{
    double a,b,m,n,o,p;
    char s;
    scanf("%lf %lf",&a,&b);
    //m=a+b;
    s='+';
    printf("%lf %c %lf = %lf\n",a,s,b,a+b);
    //n=a-b;
    s='-';
    printf("%lf %c %lf = %lf\n",a,s,b,a-b);
    //o=a*b;
    s='*';
    printf("%lf %c %lf = %lf\n",a,s,b,a*b);
    //p=a/b;
    s='/';
    printf("%lf %c %lf = %lf\n",a,s,b,a/b);
}
