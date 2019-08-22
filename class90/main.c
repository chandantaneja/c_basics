#include <stdio.h>
#include <stdlib.h>

//NO arguement but Return value_type

void main()
{
    int largest(), c;
    c=largest();
    printf("\n\n\t\t %d is largest.", c);
    getch();
}
int largest()
{
    int a,b,c;
    printf("\n\n\t\t Enter Three Numbers : ");
    scanf("%d %d %d", &a,&b,&c);

    if (a>b&&a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}
