#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a no.:\t");
    scanf("%d", &a);

    if (a%7==0)
        printf("\n\n\t\tThe entered no. is divisible by 7");

    if (a%7!=0)
        printf("\n\n\t\tThe Entered no. is not divisible by 7");

    printf("\n\n\t\t\tbye bye");
    return 0;
}
