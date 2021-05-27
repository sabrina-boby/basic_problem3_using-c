#include<stdio.h>
int main()
{
    int a[10],i,j,n,k=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n;)
    {
        for(j=1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                k=a[j];
            }
            else
            {
                k=a[i];
            }
            if(i==n-2)
            {
                break;
            }
        }
    }
    printf("ans = %d",k);
}

