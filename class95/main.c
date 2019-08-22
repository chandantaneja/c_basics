#include <stdio.h>
#include <stdlib.h>

main()
{
    int sum (int, int), mul(int ,int);
    int x,y;
    y=mul(sum(10,20), sum(20,30));
    printf("\n\n\t\t %d \n\t\t\t", y);
    getch();
}
int sum(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}
