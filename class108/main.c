#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[1000], i,j,temp,n;
    printf("\n\n\t\t Enter Length of Array : \t");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
         printf("\n\n\t\t Enter Element : \t");
         scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {

        for (j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\n");
    printf("\n\n\t\t In Decreasing Order : \t");
    for (i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n\n");
}
