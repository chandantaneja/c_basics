#include <stdio.h>
#include <stdlib.h>

//Arguement And Return Value
void main()
{
    int sum(int ,int);
    int a,b,c;
    printf("\n\n\t\t Enter Numbers : ");
    scanf("%d %d", &a,&b);
    c=sum(a,b);
    printf("\n\n\t\t SUM = %d", c);
    getch();
}
int sum (int a , int b)
{
    int c;
    c=a+b;
    return c;
}
