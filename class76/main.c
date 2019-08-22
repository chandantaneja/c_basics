#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a,rev=0,b;
    printf("\n\n\t\t Enter a Number : \t");
    scanf("%d", &a);

    while (a!=0)
    {
        b=a%10;
        rev=rev*10+b;
        a=a/10;
    }
     while (rev!=0)
     {
         b=rev%10;
         switch (b)
         {
             case 1: printf("\tone\t");
             break;
             case 2: printf("\ttwo\t");
             break;
             case 3: printf("\tthree\t");
             break;
             case 4: printf("\tfour\t");
             break;
             case 5: printf("\tfive\t");
             break;
             case 6: printf("\tsix\t");
             break;
             case 7: printf("\tseven\t");
             break;
             case 8: printf("\teight\t");
             break;
             case 9: printf("\tnine\t");
             break;
             case 0: printf("\tzero\t");
             break;



         }

         rev=rev/10;
     }
      printf("\n\n\n");
}
