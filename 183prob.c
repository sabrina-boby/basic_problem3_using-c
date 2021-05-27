#include<stdio.h>
int main()
{
    char a[10];
    int i=0;
    printf("enter your string :");
    gets(a);
    while(a[i]!='\0')
    {
       printf("your string is : %c\n",a[i]);
       i++;
    }

}
