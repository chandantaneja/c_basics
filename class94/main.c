#include <stdio.h>
#include <stdlib.h>

void m1(),m2(),m3();
main()
{
    printf("\n Welcome to Main.");
    m1();
    printf("\n Back to main.");
    printf("\n Thanks.");
    getch();
}
 void m1()
 {
   printf("\n Hello m1");
   m2();
   printf("\n back to m1");
 }
 void m2()
 {
     printf("\n hello m2");
     m3();
     printf("\n back to m2");
 }
void m3()
{
    printf("\n hello m3");
}
