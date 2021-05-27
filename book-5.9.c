#include<stdio.h>
int main()
{
    int a,b,gcd,temp=0;
    scanf("%d %d",&a,&b);
    if(a==0)
    {
        gcd=a;
    }
    else if(b==0)
    {
        gcd=b;
    }
    else
    {
        for(;b!=0;){
            printf("\n1 b: %d ", b);
            temp = b;
            printf("\n 2 temp: %d", temp);
            b = a%b;
            printf("\n 3 b: %d ", b);
            a = temp;
            printf("\n 4 a:%d", a);
        }
        gcd = a ;


    }
    printf("%d",gcd);
}
