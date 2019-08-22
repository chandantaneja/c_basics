#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num,b,a,c,sum=0;
    printf("\n\n\n\t\t\t Enter a number : \t ");
    scanf("%d", &num);
    c=num;
    while(num>0)
    {
     b=num%10;
     a=b*b*b;
     sum=sum+a;
     num=num/10;
    }
    printf("\n\n\n\t\t\t SUM = \t %d", sum);
    if (sum==c)
        printf("\n\n\t\t Yes this is an amstrong no.");

    else
        printf("\n\n\t\t No, not an amstrong no.");
}
