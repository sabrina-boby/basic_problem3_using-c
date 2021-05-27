#include<stdio.h>

void b(int a[])
{
    int i;
    for(i=0; i<4; i++)
    {
        printf(" %d ",a[i]);
    }

}
int main()
{
    int a[]= {5,6,7,8};
    b(a);
}
