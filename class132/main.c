#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[5],i;
    void input(int[]);
    input(a);
    for(i=0;i<5;i++)
    {
    printf("\n\n\t\t a[%d] = %d", i,a[i]);
    }
    printf("\n\n\t\t address of a = %u", a);
    printf("\n\n\t\t address of a = %u", &a[0]);
    getch();

}
void input(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
    printf("\n\n\t\t Enter value for a : \t");
    scanf("%d", &a[i]);
    }
    printf("\n\n\t\t address of a = %u", a);
    printf("\n\n\t\t address of a = %u", &a[0]);
}
