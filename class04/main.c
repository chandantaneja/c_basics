#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("Hello world!\n");
    int a, b, c;
    printf("\n Enter Value for a        : \t");
    scanf("%d", &a);
    printf("\n Enter Value for b        : \t");
    scanf("%d", &b);

    c=a*b;
    printf("\n The required product is  :  %d", c);
    getch();
}
