#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[300][300], i, j,b,c;
    printf("\n\n\t\t Enter no. of ROWS : \t");
    scanf("%d", &b);
    printf("\n\n\t\t Enter no. of columns :\t");
    scanf("%d", &c);

    for (i=0;i<b;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\n\n\t\t Enter Element : \t");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n\t\t MATRIX : \n\n");
    for (i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t\t%d", a[i][j]);
        }
    printf("\n\n");
    }
    getch();

}
