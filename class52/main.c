#include <stdio.h>
#include <stdlib.h>

void main()
{
    long int num,b,sum=0;
    printf("\n\n\t\t Enter a number : \t");
    scanf("%d", &num);
    while (num>0)
    {
        b=num%10;
        //rev=rev*10+b;
        sum=sum+b;
        num=num/10;
    }
    printf("\n\n\t\t Sum = \t %d", sum);

}
