#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a-b;//a=5
    b=a+b;//b=10
    a=b-a;
    printf("a = %d\n",a);
    printf("b = %d",b);

}
