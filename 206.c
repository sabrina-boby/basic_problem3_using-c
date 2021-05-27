#include<stdio.h>

void display(char c[])
{
    int i=0;
    while(c[i]!='\0')
    {
        printf("%c",c[i]);
        i++;
    }

}
int main()
{
    char a[]="sabrina";
     display(a);

}
