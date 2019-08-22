#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("\n\n\t\t Enter Day Number : \t");
    scanf("%d", &day);

    switch(day)
    {
        case 1: printf("\n\n\t\t day is Monday.");
        break;

        case 2: printf("\n\n\t\t day is Tuesday");
        break;

        case 3: printf("\n\n\t\t day is Wednesday");
        break;

        case 4: printf("\n\n\t\t day is Thursday");
        break;

        case 5: printf("\n\n\t\t day is Friday");
        break;

        case 6: printf("\n\n\t\t day is Saturday");
        break;

        case 7: printf("\n\n\t\t day is Sunday");
        break;

        default: printf("NO SUCH DAY");
        break;
    }
    getch();
    return 0;
}
