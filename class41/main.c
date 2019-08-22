#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int choice, area, len, bre, side,a,b,c,semi,xyz, rad;
    float area1;

    printf("\n\n\t\t\t\t\t\t\t Welcome to mathsWorld");
    printf("\n\n\t\t 1.Square");
    printf("\n\n\t\t 2.Rectangle");
    printf("\n\n\t\t 3.Triangle");
    printf("\n\n\t\t 4.Circle");
    printf("\n\n\t\t\t\t\t You want to calculate Area of : \t");
    scanf("%d", &choice);
    getch();
    system("cls");
    switch (choice)
    {
        case 1: printf("\n\n\n\t\t\t\t\t\t Enter Side : \t cm");
                scanf("%d", &side);
                area=side*side;
                printf("\n\n\t\t\t\t\t\t\t The area of the with Square side %d cm is %d cm^2", side, area);
        break;
        case 2: printf("\n\n\n\t\t\t Enter Length : \t cm");
                scanf("%d", &len);
                printf("\n\n\n\t\t\t Enter Breadth : \t cm");
                scanf("%d", &bre);
                area=len*bre;
                printf("\n\n\t\t\t The area of the Rectangle with length %d cm and breadth %d cm is %d cm^2", len, bre, area);
                break;
        case 3: printf("\n\n\n\t\t\t\t Enter the three sides of the triangle : \t ");
                scanf("%d %d %d", &a,&b,&c);
                semi=(a+b+c)/2;
                printf("\n\n\t\t The Semi Perimeter of the triangle with sides %d cm , %d cm and %d cm is %d cm.", a,b,c,semi);
                xyz=semi*(semi-a)*(semi-b)*(semi-c);

                area=sqrt(xyz);
                printf("\n\n\t\t\t\t The Area of the triangle with sides %d cm , %d cm and %d cm is %d cm^2.", a,b,c,area);
                break;
      case 4: printf("\n\n\n\t\t\t Enter the radius of the circle : \t");
              scanf("%d", &rad);
              area1=3.14*rad*rad;
              printf("\n\n\n\t\t\t\t The area of the circle with radius %d cm is %10.2f cm^2", rad, area1);
    }
    return 0;
}
