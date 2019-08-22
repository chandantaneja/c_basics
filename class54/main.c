#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i=1,b,a, sum=0;
   while (i<1000)
   {
    b=i%10;
    a=b*b*b;
    sum=sum+a;
    i=i/10;
    i++;
   }
   printf("%d", a);

}
