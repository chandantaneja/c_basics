#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[200][200],m,n, i, j, row,sum=0, col;
    printf("\n\n\t\t Enter no. of Rows : \t");
    scanf("%d", &row);
    m=row;
    printf("\n\n\t\t Enter no. Columns : \t");
    scanf("%d", &col);
    n=col;
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
            printf(" \t\t%d ", a[i][j]);

        }
        printf("\n\n");
    }
    for(i=0;i<row;i++)
	 {
	   for(j=0;j<col ;j++)
            {
              if (i==j)
                {
                  sum= sum+a[i][j];
                }

            }
	 }
       printf("Addition of the  left Diagonal elements is :%d\n",sum);
        printf("\n\n");
        sum=0;
        for(i=m;i<=0;i--)
	 {
	   for(j=n;j<=0;j--)
            {
              if (j==i)
                {
                  sum= sum+a[i][j];
                }

            }

	 }
       printf("Addition of the  left Diagonal elements is :%d\n",sum);

}
