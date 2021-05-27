#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,row,col,sum1=0,sum2=0;
    printf("Enter row & col : ");
    scanf("%d %d",&row,&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i<j)
                sum1=sum1+a[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i>j)
                sum2=sum2+a[i][j];
        }
    }

    printf("\nupper triangle sum = %d\n",sum1);
    printf("\nlower triangle sum = %d\n",sum2);


}
