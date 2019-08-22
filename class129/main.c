#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[5]={10,20,30,40,50},i;
    int *p;
    p=&a[0];
    for(i=0;i<5;i++)
    {
        printf("\n\n\t\t Value at Address %u is %d",p,*p);
        p++;
    }
}
