#include <stdio.h>
#include <stdlib.h>

struct abc
{
    int a,b;
};
main()
{
    struct abc a1,a2;
    a1.a=100,a2.b=200,a1.b=0, a2.a=0;



    printf("\n\n\t\t a1.a= %d \t a1.b = %d", a1.a, a1.b);
    printf("\n\n\t\t a2.a = %d \t a2.b = %d", a2.a, a2.b);
}
