#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a,b,c;
  printf("\n\n\t\t\tEnter Value for A: \t");
  scanf("%d", &a);
  getch();
  system("cls");
  printf("\n\n\t\t\tEnter Value For B: \t");
  scanf("%d", &b);
  getch();
  system("cls");
  printf("\n\n\t\t A=%d \t B=%d", a,b);
  getch();
  c=a*b;
  printf(" \n\n\t\t The value for C is: %d", c);
  getch();
  printf("\n\n");
}
