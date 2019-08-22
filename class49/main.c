#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, i1, d, i2;
     printf("\n\n\t\t Enter A positive integer : \t");
    scanf("%d", &a);
    printf("\n\n\n\t\t\t Enter Starting Multiplier : \t");
    scanf("%d", &i1);
    printf("\n\n\n\t\t\t Enter Ending Multiplier : \t");
    scanf("%d", &i2);

    system("cls");
    while (i1<=i2)
    {
        d=a*i1;
            printf("\n\n\n\t\t\t %d * %d = %d", a, i1, d);
            i1++;
    }

}
