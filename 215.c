#include<stdio.h>
struct person
{
    char name[10];
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nenter information about %d\n",i+1);

        printf("enter name : ");
        gets(person[i].name);

        printf("enter age :");
        scanf("%d",&person[i].age);


        printf("enter salary :");
        scanf("%f",&person[i].salary);
    }

    for(i=0; i<4; i++)
    {
        printf("\n\ninformation about  %d\n",i+1);
        printf("name = %s",&person[i].name);
        printf("age = %d\n",person[i].age);
        printf("age = %.2f\n",person[i].salary);

    }

}
