#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1= {27,57000},person2,person3;
    //struct person person2,person3;
    person2.age=30;
    person2.salary=60000;

    if(person1.age==person2.age && person1.salary==person2.salary)
        printf("thay are equal");
    else
        printf("thay are not equal");

}
