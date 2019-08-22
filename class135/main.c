#include <stdio.h>
#include <stdlib.h>

main()
{
    char ch;
    FILE *p;
    p=fopen("main.c","r");
    ch=getc(p);
    while (ch!=EOF)
    {

        printf("%c", ch);
        ch=getc(p);
    }
    getch();
}
