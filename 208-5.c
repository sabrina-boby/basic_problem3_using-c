#include<stdio.h>
int hishab(int n)
{
    if(n==1)
       return 1;
    else
        return n*hishab(n-1);
}
int main()
{
    int result=hishab(5);
    printf("%d",result);
}
