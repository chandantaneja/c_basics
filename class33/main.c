#include <stdio.h>
#include <stdlib.h>


int main()
{
    int simtype;
        printf("\n\t 1. PREPAID");
        printf("\n\t 2. POSTPAID");
        printf("\n\n\t\tEnter Your Choice:\t");
        scanf("%d", &simtype);
    if(simtype==1)
    {
        printf("\n\n\t\t Hello. Your Are A Prepaid Customer\t");
    }
    else if (simtype==2)
    {
        printf("\n\n\t\tHello. You are a Postpaid Customer");
    }
    else {
        printf("\n\n\t\tSorry Wrong Choice");
    }
getch();
system("cls");
    return 0;
}
