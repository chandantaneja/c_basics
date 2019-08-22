#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b, rev=0;
    printf("\n\n\t\t Enter Number : \t");
    scanf("%d", &a);
    for (;a>0;a=a/10)// Prefer This
    {
        b=a%10;
        rev=rev*10 + b;
        //a=a/10;
    }
    printf("\n\n\t\t REVERSE : \t %d", rev);

}
