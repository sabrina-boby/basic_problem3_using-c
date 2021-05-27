#include<stdio.h>
int main()
{
    int a,b,gcd,t;
    scanf("%d %d",&a,&b);
    if(a==0)
       gcd=a;
    else if(b==0)
        gcd=b;
    else
    {
        if(a!=0)
        {
            t=b;
            a=t;
            b=a%b;
        }
        gcd=a;
    }
    printf("%d",gcd);
}
