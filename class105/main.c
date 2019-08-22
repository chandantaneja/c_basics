#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[5],b[5],c[5];
    int i;
    for (i=0;i<5;i++)
    {
        printf("\n\n\t\t Enter element for A : \t");
        scanf("%d", &a[i]);
        }
    for(i=0;i<5;i++)
    {
        printf("\n\n\t\t Enter element for B : \t");
        scanf("%d", &b[i]);

    }
    printf("\n A =");
    for (i=0;i<5;i++)
    {
        printf(" %d", a[i]);


    }
    printf("\n B = ");
    for (i=0;i<5;i++)
        printf(" %d", b[i]);
    printf("\n\n C = ");
    for (i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf(" %d", c[i]);
    }

}
