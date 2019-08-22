#include<stdio.h>
#include<stdlib.h>

void main()
{
   int i=10;
   while (i>=0)
   {
       printf("\n\n\t\t %d Welcome.", i);
       i=i--; //i=i-1;
   }
getch();
system("cls");
printf("\n\n\t\t Out of while.");


}
