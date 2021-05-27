#include<stdio.h>

int sum(int n1,int n2)
{
    return n1+n2;
}

int main()
{
    int num1,num2;
    printf("enter two numb : ");
    scanf("%d %d",&num1,&num2);

    printf("sum = %d",sum(num1,num2));
}
