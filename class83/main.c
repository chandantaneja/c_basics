#include <stdio.h>
#include <stdlib.h>

main()
{
    void star(), line();
    line();
    star();
    star();
    star();
    printf("\n\n\t\t helloWorld!!!!!!!!\n");
    star();
    star();
    line();
    getch();
}
void star()
{
    int i;
    printf("\n");
    for (i=0;i<50;i++)
       printf("*");

}
void line()
{
    int i;
    for(i=0;i<80;i++)
      {
        printf(" _ ");
      }
}
