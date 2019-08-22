#include <stdio.h>
#include <stdlib.h>

//NO Arguemnet But Return Value
void main()
{
    int sum();
    int c;
    c=sum();
    printf("\n\n\t\t SUM = %d ", c);
    getch();

}
int sum()
{
    int a,b,c;
    printf("\n\n\t\t Enter Numbers : ");
    scanf("%d %d", &a,&b);
    c=a+b;
    return c;
}
