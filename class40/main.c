#include <stdio.h>
#include <stdlib.h>

int main()
{
    char month;
    printf("\n\n\t\t Enter Month Number : \t ");
    scanf("%c", &month);

    switch (month){
    case 'a': printf("\n\n\t\t Month is January");
    break;
    case 'b': printf("\n\n\t\t Month is February");
    break;
    case 'c': printf("\n\n\t\t Month is March");
    break;
    case 'd': printf("\n\n\t\t Month is April");
    break;
    case 'e': printf("\n\n\t\t Month is May");
    break;
    case 'f': printf("\n\n\t\t Month is June");
    break;
    case 'g': printf("\n\n\t\t Month is July");
    break;
    case 'h': printf("\n\n\t\t Month is August");
    break;
    case 'i': printf("\n\n\t\t Month is September");
    break;
    case 'j': printf("\n\n\t\t Month is October");
    break;
    case 'k': printf("\n\n\t\t Month is November");
    break;
    case 'l': printf("\n\n\t\t Month is December");
    break;
    default : printf("\n\n\t\t No such month");
    }
    getch();

    return 0;
}
