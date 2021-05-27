#include<stdio.h>

int maximum(int x[])
{
    int i;
    int max=x[0];
    for(i=1; i<8; i++)
    {
       if (max<x[i])
          max=x[i];
    }
    return max;
}


int main()
{
    int a[]= {5,7,6,0,9,8,12,2};
    int maximumvalue=maximum(a);
    printf("maximum is = %d ",maximumvalue);
}
