#include <stdio.h>
#include <stdlib.h>

void main()
{   int acno, bal,amt;
    char name[50];
    printf("\n\n\t\t\t Enter Your Name:\t");
    scanf("%s", &name);
    printf("\n\n\t\t\t Enter Your A/c No.: \t");
    scanf("%d", &acno);
    printf("\n\n\t\t\tEnter Balance:\t");
    scanf("%d", &bal);
    printf("\n\n\n\t\t\t\t CUSTOMER DETAILS:");
    printf("\n\n\t\t\t %d\t%s\t%d", acno,name,bal);
    printf("\n\n\n\t\t\t Enter Amt to withdraw-\t");
    scanf("%d", &amt);
    bal=bal-amt;
    printf("\n\n\t\tYour Current Balance:\t%d", bal);
    printf("\n\n\t\tEnter Amt to deposit:\t");
    scanf("%d", &amt);
    bal=bal+amt;
    printf("\n\n\t\tYour Current Bal: \t%d ", bal);
    printf("\n\n\t\t\t CUSTOMER DETAILS:");
    printf("\n\n\t\t%d\t%s\t%d", acno,name,bal);

    printf("\n\n\t\t\tThank you for Banking");
    printf("\n\n\n\t\t\tHAVE A NICE DAY");
    getch();
}
