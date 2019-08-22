#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,i1,i2;
    printf("\n\n\t\t Enter Number : \t");
    scanf("%d", &a);
    printf("\n\n\t\t Enter Starting Multiplier : \t");
    scanf("%d", &i1);
    printf("\n\n\t\t Enter Ending Multiplier : \t");
    scanf("%d", &i2);

    do
    {
     printf("\n\n\t\t %d * %d = %d",a, i1,a*i1);
     i1++;
    }
    while (i1<=i2);
}
