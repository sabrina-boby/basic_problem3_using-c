#include<stdio.h>
struct person
{

    char name[20];
    int age ;
    float salary;

};

int main()
{
    struct person person1,person2;
    printf("enter person1 information : \n");
    printf("name = ");
    scanf("%s",&person1.name);
    printf("age = ");
    scanf("%d",&person1.age);
    printf("salary = ");
    scanf("%f",&person1.salary);

    printf("\nenter person2 information : \n");
    printf("age = ");
    scanf("%d",&person2.age);
    printf("salary = ");
    scanf("%f",&person2.salary);

    printf("\n\nperson1 name = %s\n",person1.name);
    printf("\n\nperson1 age = %d\n",person1.age);
    printf("person1 salary = %.2f\n",person1.salary);

    printf("\nperson2 age = %d\n",person2.age);
    printf("person2 salary = %.2f\n",person2.salary);

}
