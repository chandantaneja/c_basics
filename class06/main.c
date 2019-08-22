#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("\n\n\n\t\t\t\t\t\t MARKSHEET\n");
    int rollno, eng,maths, total;
    float percentage;
    char name[20];
    printf("\n\t\t\t Enter Roll no. \t");
    scanf("%d", &rollno);
    printf("\n\t\t\t Enter name:\t");
    scanf("%s", &name);
    printf("\n\t\t\t Enter Marks In English:\t");
    scanf("%d", &eng);
    printf("\n\t\t\t Enter Marks In Mathematics:\t");
    scanf("%d", &maths);

   total=eng+maths;
   percentage=(total/2);

   printf("\n\n\t\t\t\t\t Student details");
   printf("\n\n\t\t\t\t\t Roll No.:- %d", rollno);
   printf("\n\n\t\t\t\t\t Name:-%s", name);
   printf("\n\n\t\t\t\t\t Marks In ENGLISH:-%d", eng);
   printf("\n\n\t\t\t\t\t Marks In Mathematics:- %d", maths);
   printf("\n\n\t\t\t\t\t TOTAL MARKS:-%d", total);
   printf("\n\n\t\t\t\t\t TOTAL PERCENTAGE:-%f", percentage);
   getch();
}
