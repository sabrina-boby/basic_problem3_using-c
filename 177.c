#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j,k,sum=0,mul[10][10];
    printf("enter 1st row & col : ");
    scanf("%d %d",&r1,&c1);
    printf("enter 2nd row & col : ");
    scanf("%d %d",&r2,&c2);

    if(r1!=c2)
    {
        printf("error !! r1 & c2 is no equal \n");
        printf("enter 1st row & col : ");
        scanf("%d %d",&r1,&c1);
        printf("enter 2nd row & col: ");
        scanf("%d %d",&r2,&c2);
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("1st matrix : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n2nd matrix : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }

    printf("multipied : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf(" %d ",mul[i][j]);
        }
        printf("\n");
    }




}
