#include <stdio.h>
#include <stdlib.h>

main()
{
    int m1(),m2();
    printf(" %d %d", m1(),m2());
    getch();
}
m1()
{
    printf("\n Hello m1");//We Cant hold a printing statement.
    return 10;
}
m2()
{
    printf("\n Hello m2");
    return 20;
}
