#include <stdio.h>
#include <stdlib.h>
/*Bank Details*/
int main()
{
    int acno, bal, with, depo, bcode;
    char fname[20], lname[20];
    printf("\n\n\t\tEnter Your First Name:\t");
    scanf("%s", &fname);
    printf("\n\n\t\tEnter Your Last Name:\t");
    scanf("%s", &lname);
    printf("\n\n\t\tEnter Your A/c No. :\t");
    scanf("%d", &acno);
    printf("\n\n\t\tEnter Your Branch Code:\t");
    scanf("%d", &bcode);
    printf("\n\n\n\t\t\t\t\t  CUSTOMER DETAILS:-");
    printf("\n\n\n\t\t\t Name = %s %s \t A/c No.= %d \t Branch Code= %d", fname, lname, acno, bcode);
    getch();
    system("cls");
    printf("\n\n\t\tEnter Your Current Balance:\t");
    scanf("%d", &bal);
    printf("\n\n\n\t\t\t\tEnter Amount To Withdraw:\t");
    scanf("%d", &with);
    bal=bal-with;
    printf("\n\n\t\tYour Remaining Balance is:\t %d", bal);
    printf("\n\n\t\t\tEnter Amount To Deposit:\t");
    scanf("%d", &depo);
    bal=bal+depo;
    printf("\n\n\n\t\t\tYour Remaining Balance is: \t%d", bal);
    getch();
    system("cls");
    printf("\n\n\n\n\t\t\tA/c Details:");
    printf("\n\n\t\t\t\tName:\t%s %s \n\n\t\t\t\t A/c No.:\t%d \n\n\t\t\t\t Closing Balance:\t%d ", fname, lname, acno, bal);
    getch();
    system("cls");
    printf("\n\n\n\n\t\t\t\t THANK YOU FOR BANKING");
    printf("\n\n\t\t\t\t\t\t\t HAVE A NICE DAY");
    return 0;
}
