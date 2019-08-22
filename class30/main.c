#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("\n\n\t\tEnter a char:\t");
    scanf("%c", &a);

    if (a>=65 && a<=90)
        printf("\n\n\t\tThe entered char is in upper case");
    if (a>=97 && a<=122)
        printf("\n\n\t\t The entered char is in lower case");
     if(a>=48 && a<=57)
        printf("\n\n\t\tThe entered char is a no.");
     getch();
     system("cls");
    return 0;
}
