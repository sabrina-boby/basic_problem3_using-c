#include<stdio.h>
int main()
{
    int  a1, a2, b1, b2, c1, c2 ,x,y;
    printf("enter X1 + Y1 = C1\n");
    scanf("%d %d %d",&a1,&a2,&c1);
    printf("enter X2 + Y2 = C2\n");
    scanf("%d %d %d",&b1,&b2,&c1);


    x=((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1));
    y=((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1));

    printf("x = %d\n",x);
    printf("y = %d\n",y);
}

