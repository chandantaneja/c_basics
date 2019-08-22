#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[200][200],b[200][200],i,j,rws1,col1,rws2,col2,cmnd, sum[200][200];
    printf("\n\n\t\t    Enter No. of ROWS : \t ");
    scanf("%d", &rws1);
    printf("\n\n\t\t Enter no. of COLUMNS :   \t");
    scanf("%d", &col1);

    for(i=0;i<rws1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("\n\n\t\t\t Enter Element : \t");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n\n\t\t\t Matrix : \n");
    for(i=0;i<rws1;i++)
    {
        for(j=0;j<col1;j++)
            printf("\t\t%d", a[i][j]);
    printf("\n\n");
    }
    getch();
    system("cls");
    //FOR MATRIX 2
    printf("\n\n\t\t Enter no. of ROWS : \t");
    scanf("%d", &rws2);
    printf("\n\n\t\t Enter no. of COLUMNS : \t");
    scanf("%d", &col2);
    for (i=0;i<rws2;i++)
    {
        for (j=0;j<col2;j++)
        {
            printf("\n\n\t\t Enter Element : \t ");
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\n\t\t\t Matrix : \t\n");
    for (i=0;i<rws2;i++)
    {
        for (j=0;j<col2;j++)
        {
            printf("\t\t%d", b[i][j]);
        }
        printf("\n\n");
    }
    getch();
    system("cls");
    //COMMANDS
    if (rws1==rws2&&col1==col2)
    {
    printf("\n\n\t\t Please enter the command carefully .");
    printf("\n\n\t\t\t\t\t 1. Addition");
    printf("\n\n\t\t\t\t\t 2. Subtraction");
    printf("\n\n\n\n\t\t\t\t Your Command : \t");
    scanf("%d", &cmnd);
    switch(cmnd)
    {
        case 1: for (i=0;i<rws1;i++)
        {
            for (j=0;j<col1;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
            printf("\n\n\n\t\t\t Matrix : \n");
            for(i=0;i<rws1;i++)
            {
            for(j=0;j<col1;j++)
            printf("\t\t%d", sum[i][j]);
            printf("\n\n");
            }


        break;
        case 2: for (i=0;i<col1;i++)
        {
            for (j=0;j<rws1;j++)
            {
                sum[i][j]=a[i][j]-b[i][j];
            }
            printf("\n\n\n\t\t\t Matrix : \n");
    for(i=0;i<rws1;i++)
    {
        for(j=0;j<col1;j++)
            printf("\t\t%d", sum[i][j]);
    printf("\n\n");
    }
        }
    }
    }
    else printf("\n\n\t\t Cannot perform any operation.");
    /*printf("\n\n\n\t\t\t Matrix : \n");
    for(i=0;i<rws1;i++)
    {
        for(j=0;j<col1;j++)
            printf("\t\t%d", sum[i][j]);
    printf("\n\n");
    }*/

    /*switch(cmnd)
    {
        case 1:
    }*///FIrrst you have to use if else to check if the matrix are of same order.

}
