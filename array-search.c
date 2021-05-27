//9 7 6 3 4 1 2 0 5 8
#include<stdio.h>
int main()
{
    int a[10],i,n,count=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&n);

    for(i=0; i<10; i++)
    {
        if(a[i]==n)
        {
           count=1;
        }
    }
    if(count==0)
    {
        printf("not avilable this number ");
    }
    else
    {
        printf("its avilable");
    }

}
