//array sum
#include<stdio.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = a;
    int sum=0, i;

    for(i=0;i<10;i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("%d",sum);
    return 0;
}
