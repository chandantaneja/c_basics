#include <stdio.h>
#include <stdlib.h>

main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n\n\t\t %d Hello", j);
            if (j==4)
                break;
        }
        if (i==2)
            break;
        printf("\n\n");

    }
    getch();

}
