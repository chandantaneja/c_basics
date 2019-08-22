#include <stdio.h>
#include <stdlib.h>
void main()
{
   int i=1, esum=0, osum=0;

   while (i<=10)
   {
       if (i%2==0)
       {
           printf("\n\n\t\t %d - Even", i);
           esum=i+esum;
       }
       else
       {
           printf("\n\n\t\t %d - Odd", i);
           osum=osum+i;
       }
       i++;
   }
    printf("\n\n\t\t Odd Sum = %d", osum);
    printf("\n\n\t\t Even sum = %d", esum);
    getch();
    system("cls");
}
