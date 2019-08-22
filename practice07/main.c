#include <stdio.h>
#include <stdlib.h>

int main()
{
  int acno, bcode,bal,wid,depo;
  char fname[20],lname[20];

  printf("\n\n\t\t\t\t\tThis is a program for managing your A/c.");
  printf("\n\n\t\t\t\t\tPlease Enter Your A/c Details:");
  printf("\n\n\t\t\t Please Enter Your A/c No.:\t");
  scanf("%d", &acno);
  printf("\n\n\t\t\tPlease Enter Your First Name: \t");
  scanf("%s", &fname);
  printf("\n\n\t\t\t Please Enter Your Last Name:\t");
  scanf("%s", &lname);
  printf("\n\n\t\t\tPlease Enter Your Branch Code:\t");
  scanf("%d", &bcode);


  printf("\n\n\n\t\t\t\t\t CUSTOMER DETAILS:");
  printf("\n\n\t\t\t Name=%s\t A/c no.=%d\t BranchCode=%d", fname,acno,bcode);
  getch();
  system("cls");

  printf("\n\n\t\t\tEnter Current Balance\t");
  scanf("%d", &bal);

  printf("\n\n\t\t\tEnter Amount To Withdraw\t");
  scanf("%d", &wid);
  getch();
  system("cls");
  bal=bal-wid;
  printf("\n\n\t\t\tYOUR REMAINING BALANCE IS\t %d", bal);
  getch();
  system("cls");

  printf("\n\n\t\t\tEnter Amount To Deposit\t");
  scanf("%d", &depo);

  bal=bal+depo;

  printf("\n\n\t\t\tYOUR REMAINING BALANCE IS\t%d", bal);









}
