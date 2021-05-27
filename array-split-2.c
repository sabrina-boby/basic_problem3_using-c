#include<stdio.h>
int main()
{
    int a[10],n,i,j,count=0,temp,m;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);

    for(j=0; j<m; j++)
    {
        temp=a[0];
        for(i=0; i<n; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}
