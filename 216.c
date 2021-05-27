#include<stdio.h>

struct person
{
    char name[20];
    int age;
    float salary;
} ;

void submit(struct person p)
{
    printf("\nname = %s\n",p.name);
    printf("age = %d\n",p.age);
    printf("salary = %.2f\n",p.salary);

}
int main()
{
    struct person person1,person2;
    strcpy(person1.name,"sabrina boby");
    person1.age=27;
    person1.salary=50000;


    strcpy(person2.name,"boby");
    person2.age=28;
    person2.salary=60000;


    submit(person1);
    submit(person2);
}
