#include<stdio.h>
void show(char b[])
{
    int i=0;
    while(b[i]!='\0')
    {
        printf("%c",b[i]);
        i++;
    }
}

int main()
{
    char a[]="sabrina";
    show(a);
}
