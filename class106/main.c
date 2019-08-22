#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[5];
    int i, freq=0;
    for (i=0;i<5;i++)
    {
        printf("\n\n\t\t Enter elements for A : ");
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[0]==a[i])
            freq++;
    }
    printf("\n\n\t\t freq = %d ", freq);
}
