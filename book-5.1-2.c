#include<stdio.h>
int main()
{
    int  a1, a2, b1, b2, c1, c2,x,y,d;
    printf("enter a1 & a2 :");
    scanf("%d %d",&a1,&a2);
    printf("enter b1 & b2 :");
    scanf("%d %d",&b1,&b2);
    printf("enter c1 & c2 :");
    scanf("%d %d",&c1,&c2);
    d=((a1*b2)-(a2*b1));

    if((int)d==0)
    {
        printf("Value of x and y can not be determined.\n");
    }
    else
    {
        x=((b2*c1)-(b1*c2))/d;
        y=((a1*c2)-(a2*c1))/d;
    }
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}
