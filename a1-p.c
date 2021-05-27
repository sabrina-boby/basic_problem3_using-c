//febonakkhi
#include<stdio.h>
int main()
{
    int m,i=0,present ,past, future;

    printf("enter any numb m : ");
    scanf("%d",&m);

    present=1;
    past=1;
    future=0;

  do
    {
      i++;
      printf("%d\t",future);
      past=present;
      present=future;
      future=past+present;
    }
  while(i<=m);

}
