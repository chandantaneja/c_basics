#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char str1[20],str2[20];
    int x;
    printf("\n\n\t\t Enter string 1: \t");
    gets(str1);
    printf("\n\n\t\t Enter String 2: \t ");
    gets(str2);
    x=strcmp(str1,str2);
    if(x==0)
    {
        printf("\n\n\t\t Strings are equal. ");
    }
    else
        printf("\n\n\t\t Strings are not equal.");
    printf("\n\n\t\t Difference = %d", x);
}
