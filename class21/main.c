#include <stdio.h>
#include <stdlib.h>
//string function
int main()//getch can take only one value so this wont work.
{   char password[20];
    printf("\n\n\t\t Enter Your Password\t");
    password=getch();
    printf("*");
    printf("pswd is %c", password);
    return 0;

}
