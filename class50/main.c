#include <stdio.h>
#include <stdlib.h>

void main ()
{
    long int num,b,rev=0;
    printf("\n\n\t\t Enter a number : \t");
    scanf("%d", &num);
    while (num>0)
    {
        b=num%10;
        rev=rev*10+b;
        num=num/10;
    }
    printf("\n\n\t\t REVERSE = \t %ld", rev);
}
