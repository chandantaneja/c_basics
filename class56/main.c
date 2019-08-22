#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i=1, a;
    printf("\n\n\t\t Enter Number : \t");
    scanf("%d", &a);
    getch();

    do
    {
        printf("\n\n\t\t %d * %d = %d", a,i,a*i);
        i++;
    }
    while (i<=10);

}
