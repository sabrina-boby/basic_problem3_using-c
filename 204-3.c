#include<stdio.h>

int hishab(int a[])
{
    int i,max;
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    max=a[0];
        for(i=1; i<5; i++)
    {
        if(max<a[i])
            max=a[i];
    }
   return max;

}
int main()
{
    int a[10],i,n;

    printf("enter your array \n");
    for(i=0; i<5; i++)
    {

        scanf("%d",&a[i]);
    }
    int maximum=hishab(a);

    printf("max = %d",maximum);

}
