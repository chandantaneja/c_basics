#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, i=0, d;
    printf("\n\n\t\t Enter A positive integer : \t");
    scanf("%d", &a);
    system("cls");
    while (i<=10)
    {
        d=a*i;
            printf("\n\n\n\t\t\t %d * %d = %d", a, i, d);
            i++; // yaha i++ baad mein aayega qki pehele hume value print krni h
    }
}
