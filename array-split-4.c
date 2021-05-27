#include<stdio.h>
int main()
{
    int a[15],i,j,n,m,t;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);
    for(j=0; j<n; j++)
    {
        t=a[0];
        for(i=0; i<n; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=t;
    }

    for(i=0; i<n; i++)
    {
        printf(" %d ",a[i]);
    }

}
