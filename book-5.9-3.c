#include<stdio.h>
int main()
{
    int a,b,t,gcd;
    scanf("%d %d",&a,&b);
    if(a==0)
        gcd=a;
    else if(b==0)
        gcd=b;
    else
    {
        while (b != 0)
        {
            printf("a = %d , b = %d\n",a,b);
            t = b;

            b = a % b;
            printf("b = %d\n",b);
            a = t;
        }
        gcd = a;
    }

    printf("\n%d",gcd);
}
