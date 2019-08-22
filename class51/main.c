#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int num, b , rev=0;
    printf("\n\n\t\t Enter A number : \t");
    scanf("%d", &num);

    while (num>0)
    {
        b=num%10;
        rev=rev*10+b;
        num=num/10;

    }
    printf("\n\n\t\t REVERSE : \t %d", rev);
    if (num==rev)
        printf("\n\n\t\t the entered no. is a palindrome.");
    else printf("\n\n\t\tthe entered no. is not a palindrome");
}
