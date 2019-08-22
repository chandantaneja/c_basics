#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;
    for (i=0;i<20;i++)
    {

        if (i>=4 && i<=7)
            continue;
        printf("\n %d Hello", i);

        if (i==10)
            break;


    }
    getch();
}
