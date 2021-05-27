#include<stdio.h>

int root(int a)
{
    printf("your root is %d\n",a*a);
}

int main()
{
    int numb;
    printf("enter your numb : ");
    scanf("%d",&numb);
    root(numb);
}


