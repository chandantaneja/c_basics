#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n\n \t\t\t THIS IS A SIMPLE INTEREST CALCULATOR!");
    float pr, rate, time, si;
    printf("\n\n\t\t ENTER PRINCIPLE AMOUNT- \t");
    scanf("%f", &pr);
    printf("\n\n\t\t ENTER RATE OF INTEREST- \t");
    scanf("%f", &rate);
    printf("\n\n\t\t ENTER TIME (in years)- \t");
    scanf("%f", &time);
    si=(pr*rate*time)/100;
    printf("SIMPLE INTEREST= %f", si);
    getchar();
    return 0;
}
