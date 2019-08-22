#include <stdio.h>
#include <stdlib.h>

main()
{
   void printline(char,int);
   char character;
   int integer;
   printf("\n\n\t\t Enter The Character : \t");
   scanf("%c", &character);
   printf("\n\n\t\t How many do you want to print ? \t");
   scanf("%d", &integer);
   system("cls");
   printline(character,integer);
   getch();
}

printline(char a,int b)
{
    int i;
    for(i=0;i<=b;i++)
        printf(" %c", a);


}
