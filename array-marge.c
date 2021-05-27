#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,n,m,c[20];
    printf("printf n : ");
    scanf("%d",&n);
    printf("printf m : ");
    scanf("%d",&m);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }

    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
        c[n+i]=b[i];
    }

    for(i=0; i<n+m; i++)
    {
        printf(" %d",c[i]);
    }
}
