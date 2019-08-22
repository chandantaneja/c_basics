#include <stdio.h>
#include <stdlib.h>

main()
{
    extern int a;// ab kahi se bhi pick kr lega value
    printf("\n %d",a);
    getch();
}
int a=25;
