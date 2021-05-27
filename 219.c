#include<stdio.h>
union person1
{
    int a,b;
};
union person2
{
    char m;
    int c;
};
union person3
{
    char k[20];
    double f;
};
int main()
{
    union person1 t1;
    union person2 t2;
    union person3 t3;
   printf("person1 = %d\n",sizeof(t1));
   printf("person2 = %d\n",sizeof(t2));
   printf("person3 = %d\n",sizeof(t3));
}
