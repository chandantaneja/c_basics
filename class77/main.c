#include <stdio.h>
#include <stdlib.h>

main ()
{
    int i,sum=0,a,b;
    for (i=1;i<1000;i++)
    {
        a=i;
        while (a!=0)
        {
            b=a%10;
            sum=sum+(b*b*b);
            a=a/10;
        }
        if (sum==i)
        {
            printf("\n\n\t\t %d is armstrong", i);
        }
        sum=0;
    }
}
