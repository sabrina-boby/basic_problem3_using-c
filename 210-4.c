#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};

int main()
{
    struct person person1, person2;
    printf("enter person1 information : ");
    printf("\nname = ");
    scanf("%s",&person1.name);
    printf("age = ");
    scanf("%d",&person1.age);
    printf("salary = ");
    scanf("%f",&person1.salary);

    printf("\nenter person2 information : ");
    printf("\nname = ");
    scanf("%s",&person2.name);
    printf("age = ");
    scanf("%d",&person2.age);
    printf("salary = ");
    scanf("%f",&person2.salary);


    printf("\n\n\nperson1 name = %s",person1.name);
    printf("\nperson1 age = %d",person1.age);
    printf("\nperson1 salary = %.2f",person1.salary);

    printf("\n\nperson2 name = %s",person2.name);
    printf("\nperson2 age = %d",person2.age);
    printf("\nperson2 salary = %.2f",person2.salary);
}
