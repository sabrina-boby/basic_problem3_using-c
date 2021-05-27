#include<stdio.h>
union test
{
    int x,y;
};
int main()
{
    union test t1;
    t1.x=10;
    printf("x = %d\n",t1.x);
    printf("y = %d\n",t1.y);

    t1.y=12;
    printf("x = %d\n",t1.x);
    printf("y = %d\n",t1.y);
}
