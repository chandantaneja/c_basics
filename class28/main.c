#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a;
    printf("\n\n\t\tEnter A Number:\t");
    scanf("%d", &a);

    if (a%2==0)
    printf("\n\n\t\t The entered no. is Even.");

    if(a%2!=0)
        printf("\n\n\t\tThe Entered no. is odd");
    getch();
    system("cls");



}
