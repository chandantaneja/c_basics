#include <stdio.h>
#include <stdlib.h>

//Arguement And Return value_type

void main ()
{
    int largest(int,int,int);
    int a,b,c;
    printf("\n\n\t\t Enter Three Numbers : ");
    scanf("%d %d %d", &a,&b,&c);
    c=largest(a,b,c);
    if (c==1)
        printf("\n\n\t\t A is Greatest.");
    else if (c==2)
        printf("\n\n\t\t B is GREATEST");
    else
        printf("\n\n\t\t C is GREATEST");
    getch();
}
int largest(int a, int b, int c)
{
    if(a>b&&a>c)
        return 1;

    else if(b>c)
        return 2;
    else
        return 3;

}
