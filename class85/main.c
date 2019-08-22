#include <stdio.h>
#include <stdlib.h>

//No arguement No Return Value
main()
{
    void sum();
    sum();
    getch();
}
void sum()
{
    int a,b,c;
    printf("\n\n\t\t Enter Numbers : \t ");
    scanf("%d %d", &a,&b);
    c=a+b;
    printf("\n\n\t\t Sum = %d", c);
}
