#include <stdio.h>
#include <stdlib.h>

main()
{
    int a=10,b=20,c=30;
    void m1(int*, int* ,int*);
    printf("\n\t a=%d b=%d c=%d", a,b,c);
    m1(&a,&b,&c);
    printf("\n\t a=%d b=%d c=%d", a,b,c);
    getch();
}
void m1(int *a,int *b, int *c)
{
    *a=*a+100;
    *b=*b+100;
    *c=*c+100;

}
