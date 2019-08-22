#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int j;
    for (i=65;i<=69;i++)
    {
        for (j=65;j<=i;j++)
        {
            printf("%8c",i);
        }
        printf("\n");
    }
}
