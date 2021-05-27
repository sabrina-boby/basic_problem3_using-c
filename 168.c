#include<stdio.h>
int main()
{
    int a[10],n,i,j,k=0,max;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=0; j<n; j++)
    {
        if(a[j]<a[j+1])
        {
            if (k<a[j+1])
                k = a[j+1];
            printf("k = %d\n", k);
        }
        else
        {
            if (k<a[j])
                k=a[j];
            printf("k = %d\n", k);
        }

        if (j==n-2)
        {
            break;
        }
    }
    printf("max : %d",k);
}
