#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};
void sishab(struct person person1)
{
    printf("name = %s\n",person1.name);
     printf("age = %d\n",person1.age);
      printf("salary = %.2f\n",person1.salary);
}
int main()
{
    struct person person1;
    strcpy(person1.name,"boby");
    person1.age=27;
    person1.salary=57000;

    sishab(person1);

}
