#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[200][200], i, j, row, col;
    printf("\n\n\t\t Enter no. of Rows : \t");
    scanf("%d", &row);
    printf("\n\n\t\t Enter no. Columns : \t");
    scanf("%d", &col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n\n\t\t Enter Element : \t");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n\t\t Matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %d ", a[i][j]);

        }
        //printf("\n\n");
    }

}
