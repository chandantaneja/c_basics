#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[200][200],sum=0,i,j,row,col,k;
    printf("\n\n\t\t Enter no. of ROWS : \t");
    scanf("%d", &row);
    printf("\n\n\t\t Enter no. of COLUMNS \t");
    scanf("%d", &col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("\n\n\t\t\t\t Enter Element : \t");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n\t\t MATRIX : \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf(" \t\t%d ", a[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<row;i++)
    {

        for(j=0;j<col;j++)
        {
            sum=sum+a[i][j];
        }
        printf("\n\n\t\t Sum of Row %d= %d",i+1, sum);
        sum=0;
    }
    sum=0;
    printf("\n\n");

    for(j=0;j<col;j++)
    {

        for(i=0;i<row;i++)
        {
            sum=sum+a[i][j];
        }
        printf("\n\n\t\t Sum of Column %d= %d",j+1, sum);
        sum=0;
    }
}
