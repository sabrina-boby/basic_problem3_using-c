#include<stdio.h>
union person
{
    int a,b;

};
int main()
{
    union person p;
    p.a=10;
    printf("a = %d\n",p.a);
    printf("b = %d\n",p.b);

    p.b=12;
    printf("a = %d\n",p.a);
    printf("b = %d\n",p.b);


}
