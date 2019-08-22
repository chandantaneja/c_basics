#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b,i;
    a=10;
    b=20;
    double x[5]={10.01,20.01,30.02,40.02,50.02};
    printf("\n\n\t\t A = %u B = %u", &a,&b);
    for(i=0;i<5;i++)
    {
        printf("\n\n\t\t Address of x[%d] is %u", i, &x[i]);
    }
    getch();

}
