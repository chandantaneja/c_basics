#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,k;
    float principle, rate, time, CI;

    /* Input principle, time and rate */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);
    printf("\n\n\t\t Enter i : ");
    scanf("%d", &i);
    printf("\n\n\t\t Enter k : ");
    scanf("%d", &k);
    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Calculate compound interest */
    CI = principle* (pow((1 + rate / 100), time));

    /* Print the resultant CI */
    printf("Compound Interest = %f", CI);
    fflush(stdin);
    j=pow((i), k);
    printf("\n\n\t\t j = %d", j);
    return 0;
}
