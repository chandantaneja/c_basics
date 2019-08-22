#include <stdio.h>
#include <stdlib.h>

//Arguement but No Return Value.
void main()
{
    void sum(int,int);
    int a,b;
    printf("\n\n\t\t Enter Numbers : ");
    scanf("%d %d", &a,&b);
    sum(a,b);
    getch();
}
void sum(int a, int b)
{
    int c;
    c=a+b;
    printf("\n\n\t\t SUM = %d", c);
}
