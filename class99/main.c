#include <stdio.h>
#include <stdlib.h>

main()
{
    static int i=0;//By using static this declaration statement is readd only once.
    printf("\n Hello");
    i++;
    if(i<5)
        main();

    else
    getch();
}
