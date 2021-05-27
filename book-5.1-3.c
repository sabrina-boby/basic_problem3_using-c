#include<stdio.h>
int main()
{
    double n1,n2,k,r;
    printf("X + Y = ");
    scanf("%lf",&n1);
    printf("X - Y = ");
    scanf("%lf",&n2);

    k=(n1+n2)/2;
    r=(n1-n2)/2;
    printf("x = %lf\n",k);
    printf("y = %lf\n",r);
}
