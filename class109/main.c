#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[1000],i,n, m,o;
    printf("\n\n\t\t Enter the length of an array : \t");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n\n\t\t Enter Element : \t");
        scanf("%d", &a[i]);
    }
    printf("\n\n\n\t\t Array > ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n\n\t\t Enter the Position at which you want to insert the element : \t");
    scanf("%d", &m);
    printf("\n\n\t\t Enter the element to insert : \t");
    scanf("%d", &o);
    a[m]=n;
    for(i=m;i<n;i++)
    {
        a[i]=a[m+1];
    }

}
