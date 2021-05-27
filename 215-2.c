#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};
int main()
{
   struct person person[4];
   int i;
   for(i=0; i<4; i++)
   {
     printf("\nenter information of person %d : ",i+1);
     printf("\nname = ");
     fflush(stdin);
     gets(person[i].name);
     printf("age = ");
     scanf("%d",&person[i].age);
     printf("salary = ");
     scanf("%f",&person[i].salary);
   }
    for(i=0; i<4; i++)
    {
       printf("\n\ninformation of person %d is : ",i+1);
       printf("\tname = %s",person[i].name);
       printf("\t age = %d",person[i].age);
       printf("\tsalary = %.2f",person[i].salary);
    }
}
