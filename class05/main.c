#include <stdio.h>
#include <stdlib.h>
main()
{
    printf("\n\n\t\t\tHello world!\n");
    int a,b,c;
    float d;
    printf("\n\n\t\t Enter Three Numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    d=(a+b+c)/3;
    printf("\n X=%.8f", d);
    getch();
}
