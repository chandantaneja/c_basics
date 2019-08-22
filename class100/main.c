#include <stdio.h>
#include <stdlib.h>

main()
{
    int factorial(int);
    int a,num;
    printf("\n\n\t\t Enter Number : \t");
    scanf("%d", &num);
    a=factorial(num);
    printf("\n Ans = %d", a);
    getch();
}
int factorial(int a)
{
    int fact;
    if (a==1)
        return 1;
    else
    {
        fact=a*factorial(a-1);
        return fact;
    }
}
