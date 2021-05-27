#include<stdio.h>

struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;
    printf("person1 information  \n");
    printf("enter age : ");
    scanf("%d",&person1.age);
    printf("enter salary : ");
    scanf("%f",&person1.salary);

    printf("\nperson1 information  \n");
    printf("enter age : ");
    scanf("%d",&person2.age);
    printf("enter salary : ");
    scanf("%f",&person2.salary);

    if(person1.age==person2.age && person1.salary==person2.salary)
    printf("\nthey are equal\n");
    else
    printf("\nthey are not equal\n");




}
