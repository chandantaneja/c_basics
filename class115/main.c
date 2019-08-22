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
    printf("\n\n\t\t %s", str1);
    printf("\n\n\t\t %s", str2);
    strcat(str1,str2);
    printf("\n\t\t\t----------------After--------------");
    printf("\n\n\t\t String 1 %s", str1);
    printf("\n\n\t\t string 2 %s", str2);

    getch();
}
