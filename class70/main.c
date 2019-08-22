#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int i,j,k;

    for (i=65;i<=69;i++)
    {
        for (k=69;k>=i;k--)
        {
            printf(" ");
        }
        for (j=65;j<=i;j++)
        {
            printf(" %c", j);
        }
        printf("\n");

    }
}
