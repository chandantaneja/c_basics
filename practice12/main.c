#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acno, bal, bcode, with, depo;
    char fname[10], lname[10], choice;
    printf("\n\n\t\t WELCOME! to XYZ Bank OF INDIA\t\n");
    printf("\n\n\t\t\t\t\tOur duty is to serve you  the BEST!");
    getch();
    system("cls");

    printf("\n\n\t\t Please Enter Your Details Carefully:\n");
    printf("\n\n\n\t\t\t ... Enter Your A/c No.: \t");
    scanf("%d", &acno);
    printf("\n\n\n\t\t\t...Enter Your Branch Code:\t");
    scanf("%d", &bcode);
    printf("\n\n\n\t\t\t...Enter Your First Name: \t");
    scanf("%s", &fname);
    printf("\n\n\n\t\t\t...Enter Your Last Name:\t");
    scanf("%s", &lname);
    printf("\n\n\n\t\t\t...Enter Your A/c Balance:\t");
    scanf("%d", &bal);
    getch();
    system("cls");
    printf("\n\n\n\n\t\t\t\t Please Verify Your Details:\t");
    printf("\n\n\n\n\n\t\t\t\t\t\t CUSTOMER DETAILS:");
    printf("\n\n\n\t\t\t NAME: %s %s \t A/c No.: %d \t BRANCH CODE: %d", fname, lname, acno, bcode);
    getch();
    system("cls");
    printf("\n\n\t\t\t\t Please Enter Choice");
    printf("\n\n\t\t 1. Cash Withdraw");
    printf("\n\n\t\t 2. Cash Deposit");
    printf("\n\n\n\n\n\n\n \t\tYour Choice:\t");
    scanf("%d", &choice);
    getch();
    system("cls");
    if(choice==1)
    {
        printf("\t\t\t\t\t\t\t YOUR CHOICE: CASH WITHDRAWL-\t");
        printf("\n\n\n\t\t\t Enter Amount to withdraw:\t");
        scanf("%d", &with);
        bal=bal-with;
        printf("\n\n\n\t\t\t REMAINING BALANCE:%d \t", bal);
    }
    else if(choice==2){
        printf("\t\t\t\t\t\t\t YOUR CHOICE: CASH DEPOSIT-\t");
        printf("\n\n\n\t\t\t Enter Amount to Deposit:\t");
        scanf("%d", &depo);
        bal=bal+depo;
        printf("\n\n\n\t\t\t REMAINING BALANCE:%d \t", bal);
    }
    else {
        printf("Incorrect Choice.");
        printf("\n\n Please Chose Again.");

    }
    printf("\n\n\n\n\t\t\t\t Thank You For Banking.");
    return 0;
}
