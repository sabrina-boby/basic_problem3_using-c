#include<stdio.h>
int main()
{
    int a[10],n,i,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        if(m==a[i])
        {
            printf("position = %d\n",i+1);
            break;
        }
    }
    if(m!=a[i])
        printf("not found\n");

}
