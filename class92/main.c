#include <stdio.h>
#include <stdlib.h>

//Arguement But No Return
void main()
{
    void largest(int,int, int);
    int a,b,c;
    printf("\n\n\t\t Enter Three Numbers : ");
    scanf("%d %d %d", &a,&b,&c);
    largest (a,b,c);
    getch();
}
void largest(int a,int b,int c)
{
    if(a>b&&a>c)
        printf("\n\n\t\t A is GREATEST.");

    else if(b>c)
        printf("\n\n\t\t B is GREATEST.");
    else
        printf("\n\n\t\t C is GREATEST.");

}
