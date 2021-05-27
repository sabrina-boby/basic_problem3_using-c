//palendrom
#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],b[100];
    printf("enter string :");
    gets(a);

    strcpy(b,a);
    strrev(b);

    if(strcmp(a,b)==0)
    printf("string");
    else
    printf("not string");
}
