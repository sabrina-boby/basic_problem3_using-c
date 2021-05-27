#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],i,j,k,r1,r2,c1,c2,sum=0;
    printf("enter r1 & c1 :");
    scanf("%d %d",&r1,&c1);
    printf("enter r2 & c2 :");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Error !! c1 & r2 not equal\n");
        printf("enter r1 & c1 :");
        scanf("%d %d",&r1,&c1);
        printf("enter r2 & c2 :");
        scanf("%d %d",&r2,&c2);
    }
    printf("\nenter A :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter B :\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nmatrix A is:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix B is:\n");
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
            for(k=0; k<r2; k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    printf("\nmultiply :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf(" %d ",mul[i][j]);
        }
        printf("\n");
    }


}
