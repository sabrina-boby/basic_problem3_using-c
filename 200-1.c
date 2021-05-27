#include<stdio.h>
int hishab(int a)
{
    return a*a;
}
int main()
{
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    hishab(a);
    printf("%d",hishab(a));
}
