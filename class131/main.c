#include <stdio.h>
#include <stdlib.h>

//Call by value
main()
{
    void change(int),change01(int*);
    int a=10;
    printf("\n\n\t\t a = %d", a);
    change(a);
    printf("\n\n\t\t a = %d", a);
    change01(&a);
    printf("\n\n\t\t a = %d", a);
    change(a);
    printf("\n\n\t\t a = %d", a);

}

void change(int a)
{
    a=a+100;
}
void change01(int *a)
{
    *a=*a+100;
}
