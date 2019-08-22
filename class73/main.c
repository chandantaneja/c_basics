#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,i;
    printf("\n\n\t\t Enter a number : \t");
    scanf("%d", &a);

    for (i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("\n\n\t\t %d is not a prime number",a);
        }
    else
        printf("\n\n\t\t %d is a prime number.", a);
    }
}
