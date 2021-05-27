#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,row,col;
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
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("transpose matrix : \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
}
