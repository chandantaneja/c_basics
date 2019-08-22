#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[5], min, max, i;
    for(i=0;i<5;i++)
    {
        printf("\n\n\t\t Enter Elements for array : \t");
        scanf("%d", &a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<5;i++)
    {
        if (max<a[i])
            max=a[i];
        if (min>a[i])
            min=a[i];
    }
    printf("\n\n\t\t max=%d", max);
    printf("\n\n\t\t min=%d", min);
}
