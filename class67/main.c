#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,j,k;
    k=1;
    for (i=1;i<=4;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%8d", k++);
        }

        printf("\n");
    }
}
