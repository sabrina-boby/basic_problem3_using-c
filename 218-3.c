#include<stdio.h>
union person
{
    int a,b;
};
int main()
{
   union person p;
   p.a=10;
   printf("a = %d",p.a);
   printf("b = %d",p.b);

   p.a=12;
   printf("a = %d",p.a);
   printf("b = %d",p.b);

}
