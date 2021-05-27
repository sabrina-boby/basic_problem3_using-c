#include<stdio.h>
int hishab(int a,int b)
{
    int k=1,i;
    for(i=1; i<=b; i++)
    {
        k=k*a;
    }
    return k;
}
int main()
{
    int a,b;
    printf("enter base : ");
    scanf("%d",&a);
    printf("enter root : ");
    scanf("%d",&b);
    hishab(a,b);
    printf(" \n= %d ",hishab(a,b));
}
