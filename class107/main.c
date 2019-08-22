#include <stdio.h>
#include <stdlib.h>

main()
{
    int i,a[10], freq=0;

    for(i=0;i<10;i++)
    {
    printf("\n\n\t\t Enter the ELEMENTS : \t");
    scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++)
    {
    if (a[i]==a[i+1])
        freq++;
    }
    printf("\n\n\t\t freq = %d", freq);
}
