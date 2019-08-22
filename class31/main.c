#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("\n\n\t\tEnter a no.:\t");
    scanf("%d", &a);
    if (a%2==0)
{
    printf("\n\n\t\thelloWorld");
    printf("\n\n\t\t%d is even", a);
}
    else
    {
        printf("\n\n\t\thelloWorld");
        printf("\n\n\t\t%d is odd", a);
    }
getch();

system("cls");
    return 0;
}
