#include<stdio.h>

struct person
{
    int age;
    float salary;

};
struct person person1,person2,person3;
int main()
{

    person1={27,50000};

    person2.age = 28;
    person2.salary = 60000;

    person3=person2;

    printf("information of person1 : ");
    printf("\nage = %d\n",person1.age);
    printf("salary = %.1f\n",person1.salary);

    printf("\n\ninformation of person2 : ");
    printf("\nage = %d\n",person2.age);
    printf("salary = %.1f\n",person2.salary);

    printf("\n\ninformation of person3 : ");
    printf("\nage = %d\n",person3.age);
    printf("salary = %.1f\n",person3.salary);
}
