#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\n\n\t\t Enter 3 Numbers:\t");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b&&a>c)
    {
        printf("\n\n\t\t A is GREATEST.");
    }
    else if (b>c){
        printf("B is GREATEST.");
    }
    else {
        printf("C is GREATEST");
    }
    getch();
    system("cls");
    return 0;
}
