#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("\n\n\t\tEnter a Single Char:\t\n");
    scanf("%c", &ch);
    if(ch>=65&&ch<=90)
    {
        printf("\n\n\t\t%c is Upper Case.\n ", ch);
    }
     else if(ch>=90&&ch<=122)
     {
         printf("\n\n\t\t %c is in Lower Case.\n", ch);
     }
     else if (ch>=40 && ch<=57)
     {
         printf("\n\n\t\t %c is a Digit.\n", ch);
     }
     else {
        printf("\n\n\t\t %c is a Special Character.\n", ch);
     }
return 0;
}
