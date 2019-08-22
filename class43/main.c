#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base_year=1980;
    int year, years, total_days,day;
    printf("\n\n\n\t\t\t Enter Year : \t");
    scanf("%d", &year);
    years=year-base_year;
    total_days=(years*365)+years/4;
    day=total_days%7;
    if (year%4!=0)
        day=day + 1;
    else
    day=day +0;
    switch (day)
    {


    case 0: printf("\n\n\t\t  The day is Tuesday \n");
    break;
    case 1: printf("\n\n\t\t  The day is Wednesday \n");
    break;
    case 2: printf("\n\n\t\t  The day is Thursday \n");
    break;
    case 3: printf("\n\n\t\t  The day is Friday \n");
    break;
    case 4: printf("\n\n\t\t  The day is Saturday \n");
    break;
    case 5: printf("\n\n\t\t  The day is Sunday \n");
    break;
    case 6: printf("\n\n\t\t  The day is Monday \n");
    break;
    }
    getch();
    system("cls");
    return 0;
}
/*another method for this is to take a variable leapday of int type then if(year%4==0);
leapday=0;
else leapday=1 and now add leapday to the variable day*/
