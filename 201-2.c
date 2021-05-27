#include<stdio.h>
void khetrofol(int a,int b)
{
    int khetrofol;
    khetrofol=0.5*a*b;
    printf("khetrofol = %d",khetrofol);
}
int main()
{
    int a,b;
    printf("enter vumi : ");
    scanf("%d",&a);
    printf("enter otivuj : ");
    scanf("%d",&b);
    khetrofol(a,b);

}
