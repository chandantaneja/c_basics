#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("\n\n\t\tEnter Value For A:\t");
    scanf("%d", &a);
    printf("\n\n\t\t Enter Value For B:\t");
    scanf("%d", &b);

    if(a>b)
    {
        printf("\n\n\t\t %d is greater than %d", a,b);
    }
    else
    {
        printf("\n\n\t\t %d is smaller than %d", a,b);
    }
    getch();
    system("cls");
    printf("byeBye\n\n");
    getch();
}
