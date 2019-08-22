#include <stdio.h>
#include <stdlib.h>`
int main()
{
    int rno, eng, maths, hindi, evs, total;
    float percentage;
    char fname[20], lname[20], name[20];

    printf("\n\n\n\t\t\tTHIS IS THE AISSCE MARKSHEET");
    printf("\n\n\n\t\t\tPLEASE ENTER STUDENT DETAILS:");
    printf("\n\n\t\tFirst Name:\t");
    scanf("%s", &fname);

    printf("\b    \b\b\b\b\b\b \t\t Last Name   :\t");
    scanf("%s", &lname);
    printf("\n\n\t\tRoll No.:\t");
    scanf("%d", &rno);
    getch();
    system("cls");
    printf("\n\n\t\t\t\t\t STUDENT DETAILS:");
    printf("\n\n\t\t Name=\t%s %s \t Roll No.=\t %d ", fname,lname,rno); //how to get last name next to first name
    getch();
    system("cls");
    printf("\n\n\t\tMarks In English: \t");
    scanf("%d", &eng);
    printf("\n\n\t\tMarks In Hindi: \t");
    scanf("%d", &hindi);
    printf("\n\n\t\tMarks In Maths: \t");
    scanf("%d", &maths);
    printf("\n\n\t\t\t\t Extra Subjects-");
    printf("\n\n\t\t Marks In E.V.S: \t");
    scanf("%d", &evs);
    total=eng+hindi+maths+evs;
    printf("\n\n\n\t\t\t Your Total Score (out of 400):\t%d ", total);
    percentage=total/4;
    printf("\n\n\n\t\t\tYour Percentile Score:\t%5.2f", percentage); //How to limit this float
    getch();
    system("cls");

    if(percentage<=33)
{
    printf("\n\n\n\n\t\tWe are Sorry. You are Fail.");
    printf("\n\n\n\n\t\t\t\t\tNOT PROMOTED");
}
    if (percentage>33)
{
    printf("\n\n\n\n\t\t\t\t CONGRATULATIONS. WELL DONE!");
    printf("\n\n\n\n\t\t\t\t\t\t PROMOTED");

}
    getch();
    system("cls");
    printf("\n\n\n\n\t\t\t\t Thank You");
    printf("\n\n\n\n\t\t\t\t HAVE A NICE DAY\n\n");
    return 0;
}
