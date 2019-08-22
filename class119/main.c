#include <stdio.h>
#include <stdlib.h>
#include<string.h>

main()
{
    char str[20]="ab\0cd";
    char str2[20]="qwerty";
    printf("\n\t\t Length = %d", strlen(str));
    printf("\n\n\t\t str = %s", str);
    printf("\n\t\t Length = %d", strlen(str2));
    printf("\n\n\t\t str = %s", str2);
}
