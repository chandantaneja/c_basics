#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[200][200],i,j,row,col,sum=0;

    printf("\n\n\t\t Enter no. of rows : \t");
    scanf("%d", &row);
    printf("\n\n\t\t Enter no. of Columns : \t");
    scanf("%d", &col);
    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("\n\n\t\t Enter Element : \t");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n\t\t Matrix : \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf(" \t%d ", a[i][j]);
        }
        printf("\n\n");
    }
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("\n\n\t\t Sum = %d", sum);

}
