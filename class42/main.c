#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\n\n\n\t\t\t Enter value for A : \t");
    scanf("%d", &a);
    printf("\n\n\n\t\t\t Enter value for B : \t");
    scanf("%d", &b);
    printf("\n\n\n\t\t\t Enter value for C : \t");
    scanf("%d", &c);
    getch();
    system("cls");

    if (a>b)
    {
       if (a>c)
       printf("\n\n\n\t\t\t A is the Greatest \n");
       else
       printf("\n\n\n\t\t\ C is the Greatest \n");

    }
    else{
        if(b>c)
        printf("\n\n\n\t\t\t B is the GREATEST \n");

        else
        printf("\n\n\n\t\t\t C is GREATEST \n");
    }
    return 0;
}
