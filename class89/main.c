#include <stdio.h>
#include <stdlib.h>

//NO ARGUMENT NO RETURN
void main()
{
    void largest();
    largest();
    getch();
}
void largest()
{
    int a,b,c;
    printf("\n\n\t\t Enter Three Numbers : ");
    scanf("%d %d %d", &a,&b,&c);

    if (a>b&&a>c)
    {
        printf("\n\n\t\t %d is GREATEST.", a);
    }
    else if (b>c)
        printf("\n\n\t\t %d is GREATEST.", b);

    else printf("\n\n\t\t %d is GREATEST.", c);
}
