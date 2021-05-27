#include<stdio.h>
int main()
{
    int a[10],i,n,k=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<a[i+1])
        {
            if(k<a[i+1])
                k=a[i+1];
            printf("k2 = %d\n",k);
        }
        else
        {
            if(k<a[i])
                k=a[i];
            printf("k3 = %d\n",k);
        }
        if(i==n-2)
        {
            break;
        }
    }
    printf("ans = %d",k);
}
