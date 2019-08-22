#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno,eng,hin,math,evs,total;
    char name[30],grade;
};
main()
{
    struct student s1[30];
    int i,choice,rn,cn=0,hi=0,pos=0;
    char gr;
    printf("\n\n\n\t\t\t ****************************************************");
    printf("\n\t\t\t\t\t   STUDENT RECORD ");
    printf("\n\t\t\t ****************************************************");

    for(i=0;i<2;i++)
    {
    printf("\n\n\t\t Enter Roll No. : \t");
    scanf("%d", &s1[i].rollno);
    printf("\n\n\t\t Enter Name     : \t");
    fflush(stdin);
    gets(s1[i].name);
    printf("\n\n\t\t\t\t Enter Marks In English       :\t");
    scanf("%d", &s1[i].eng);
    printf("\n\n\t\t\t\t Enter Marks In Hindi         :\t");
    scanf("%d", &s1[i].hin);
    printf("\n\n\t\t\t\t Enter Marks In Maths         :\t");
    scanf("%d", &s1[i].math);
    printf("\n\n\t\t\t\t Enter Marks In EVS           :\t");
    scanf("%d", &s1[i].evs);
    s1[i].total=s1[i].eng+s1[i].hin+s1[i].math+s1[i].evs;
    cn++;
    if(s1[i].total>290)
        s1[i].grade='A';
    else if(s1[i].total>250)
        s1[i].grade='B';
    else if(s1[i].total>200)
        s1[i].grade='C';
    else s1[i].grade='D';
    system("cls");
    }
    system("cls");
    while(choice!=6)
    {
        getch();
        system("cls");
    printf("\n\n\t\t Make an appropriate choice");
    printf("\n\n\n\t\t\t 1. Add a Student  ");
    printf("\n\n\t\t\t 2. Search a Student ");
    printf("\n\n\t\t\t 3. All Student ");
    printf("\n\n\t\t\t 4. GradeWise Student ");
    printf("\n\n\t\t\t 5. Topper Student ");
    printf("\n\n\t\t\t 6. EXIT");
    printf("\n\n\n\t\t\t\t\t Enter Choice : \t");
    scanf("%d", &choice);
    system("cls");
    switch(choice)
    {
        case 1: printf("\n\n\t\t Enter Roll No. : \t");
                scanf("%d", &s1[cn].rollno);
                printf("\n\n\t\t Enter Name     : \t");
                fflush(stdin);
                gets(s1[cn].name);
                printf("\n\n\t\t\t\t Enter Marks In English       :\t");
                scanf("%d", &s1[cn].eng);
                printf("\n\n\t\t\t\t Enter Marks In Hindi         :\t");
                scanf("%d", &s1[cn].hin);
                printf("\n\n\t\t\t\t Enter Marks In Maths         :\t");
                scanf("%d", &s1[cn].math);
                printf("\n\n\t\t\t\t Enter Marks In EVS           :\t");
                scanf("%d", &s1[cn].evs);
                s1[cn].total=s1[cn].eng+s1[cn].hin+s1[cn].math+s1[cn].evs;

                if(s1[cn].total>290)
                    s1[cn].grade='A';
                else if(s1[cn].total>250)
                    s1[cn].grade='B';
                else if(s1[cn].total>200)
                    s1[cn].grade='C';
                else s1[cn].grade='D';
                cn++;

                break ;

        case 2: printf("\n\n\t\t Enter Roll No. to Search : \t");
                scanf("%d", &rn);
                for(i=0;i<cn;i++)
                {
                    if(rn==s1[i].rollno)
                    {
                        printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
                        printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);

                        break;
                    }
                }
                break;
        case 3:printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
               for(i=0;i<cn;i++)
                    {
                        printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                    }
                        break;
        case 4:printf("\n\n\t\t\t Enter Grade you want to search for : \t");
        fflush(stdin);
               scanf("%c", &gr);
               printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");

               for(i=0;i<cn;i++)
               {
                   if(s1[i].grade==gr)
                   {
                       printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                   }
               }
               break;
        case 5:printf("\n\n\t\t\t Topper Student : ");
               printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
               for(i=0;i<cn;i++)
                {
                    if(hi<=s1[i].total)
                    {
                        hi=s1[i].total;
                        pos=i;
                    }

                }
                printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[pos].rollno,s1[pos].name,s1[pos].eng,s1[pos].hin,s1[pos].math,s1[pos].evs,s1[pos].total,s1[pos].grade);

                break;
        }
    }
}
