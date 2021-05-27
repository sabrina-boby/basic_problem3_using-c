#include<stdio.h>
int main()
{
    int n,i,m=0;
    char k;
    k='*';
    for(n=3; n<=10; n++)
    {
        for(i=1; i<=10; i++)
        {
            m=m+n;
            printf("%d %c %d = %d\n",n,k,i,m);
        }
        printf("\n");
        m=0;
    }
}
