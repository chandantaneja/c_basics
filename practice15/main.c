#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base_year=1980;
    int date, month, year, total_days, day, years;
    printf("\n\n\n\t\t\t Enter date (dd) : \t");
    scanf("%d", &date);
    printf("\n\n\n\t\t\t Enter Month (mm) : \t");
    scanf("%d", &month);
    printf("\n\n\n\t\t\t Enter year (yyyy) : \t");
    scanf("%d", &year);
    printf("\n\n\n\n\t\t\t\t\t\t Verify Your Entered Date (dd-mm-yyyy) : %d - %d - %d", date, month, year);
    getch();
    system("cls");
    if  ((date>31 || date<1)||(month>12 || month<1)||(year<1980))
    {
        printf("\n\n\n\n\t\t\t\t\t SORRY! This date does not Exist.!");
    }
    else
    {
        years=year-base_year;
        total_days=date+(years*365)+(month*31);
        day=total_days%7;

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

    }
    return 0;
}
