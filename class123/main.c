#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name[20];
    int sal;
    char designation[20];
};
main()
{
    struct employee e1[10],e2;
    printf("\n\n\t\t Size of e1 = %d", sizeof(e1));
    getch();
}
