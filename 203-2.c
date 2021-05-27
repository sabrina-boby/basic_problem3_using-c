#include<stdio.h>
int hishab(int a,int b)
{
    int z=1,i;
    for(i=1; i<=b; i++)
    {
       return z=z*a;
    }

}
int main()
{
     int a,b;
    printf("enter base : ");
    scanf("%d",&a);
    printf("enter root : ");
    scanf("%d",&b);
    int z=hishab(a,b);
    printf("%d",z);
}
