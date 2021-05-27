#include<stdio.h>
int main()
{
    int n,i;
    char k;
    scanf("%d",&n);
    k='*';
    for(i=1; i<=10; i++)
    {
        printf("%d %c %d = %d\n",n,k,i,(n*i));
    }
}
