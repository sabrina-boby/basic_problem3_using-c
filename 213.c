#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1 = {27,57000};
    struct person person2,person3;

    person2.age = 30;
    person2.salary = 60000;

    person3=person2;

    printf("person1 age = %d",person1.age);
    printf("\nperson1 salary = %.2f\n",person1.salary);

    printf("\nperson2 age = %d",person2.age);
    printf("\nperson2 salary = %.2f\n",person2.salary);

    printf("\nperson3 age = %d",person3.age);
    printf("\nperson3 salary = %.2f\n",person3.salary);
}
