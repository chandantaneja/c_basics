#include <stdio.h>
#include <stdlib.h>

main ()
{
    int i,j,k,l;
     for (i=1;i<=5;i++)
     {
         for (k=7;k>=i;k--)
         {
             printf(" ");
         }

             for (j=i;j>1;j--)
         {
             printf("%d", j);
         }
         for (l=1;l<=i;l++)
         {
             printf("%d",l);
         }
         printf("\n");
     }


}
