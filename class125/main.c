#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[100];
    int marks;
};
main()
{
    struct student s1;
    printf("\n\n\t\t Enter Roll No. : ");
    scanf("%d", &s1.rollno);
    printf("\n\n\t\t Enter Name : ");
    fflush(stdin);
    gets(s1.name);
    //scanf("%s", &s1.name);
    printf("\n\n\t\t Enter Marks : ");
    scanf("%d", &s1.marks);
    printf("\n\n\t\t Students Record : ");
    printf("\n\n\t\t Roll No. \t Name \t Marks ");
    printf("\n\t\t %d \t %s \t %d", s1.rollno, s1.name,s1.marks);
}
