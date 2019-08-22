#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollno,eng,hin,math,evs,total;
    char name[30],grade;
};
main()
{
    struct student s1[30],s2;
    char name01[30];
    int flag,k=0;
    int i,choice=0,choice02,choice03,a,comp=0,rn,cn=0,hi=0,pos=0,marks,ent,len,cn01=0,j;
    char gr,ex;
    printf("\n\n\n\t\t\t ****************************************************");
    printf("\n\t\t\t\t\t   STUDENT RECORD ");
    printf("\n\t\t\t ****************************************************");
    printf("\n\n\n\n\n\n\t\t\t\t  How many entries you want to add ? \t");
    scanf("%d", &ent);
    //Entries
    for(i=0;i<ent;i++)
    {
    printf("\n\n\t\t Enter Roll No. : \t");
    scanf("%d", &s1[i].rollno);
    printf("\n\n\t\t Enter Full Name *(if there is no last name, please add spaces)    : \t");
    fflush(stdin);
    gets(s1[i].name);
    len=strlen(s1[i].name);
    printf("\n\n\t\t\t\t Enter Marks In English   (M.M = 100)      :\t");
    scanf("%d", &s1[i].eng);
    printf("\n\n\t\t\t\t Enter Marks In Hindi     (M.M = 100)      :\t");
    scanf("%d", &s1[i].hin);
    printf("\n\n\t\t\t\t Enter Marks In Maths     (M.M = 100)      :\t");
    scanf("%d", &s1[i].math);
    printf("\n\n\t\t\t\t Enter Marks In EVS       (M.M. = 100)     :\t");
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
    /*for(i=0;i<ent;i++)
    {
        for(j=i+1;j<ent;j++)
        {
            if(s1[i].rollno>s1[j].rollno)
            {
                a=s1[i].rollno;
                s1[i].rollno=s1[j].rollno;
                s1[j].rollno=a;
            }
        }
    }
    for(i=0;i<ent;i++)
    {
        printf("%d\n", s1[i].rollno);
    }*/

    while(choice!=6)
    {
        //main menu
        getch();
        system("cls");
    printf("\n\n\t\t Please Make an appropriate choice");
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
        //add an entry
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
        //Search Menu
        case 2:while (choice02!=4)
        {
                printf("\n\n\n\t\t\t You want to search by : ");
                printf("\n\n\t\t\t\t 1. Roll Number ");
                printf("\n\t\t\t\t 2. Name ");
                printf("\n\t\t\t\t 3. Marks");
                printf("\n\t\t\t\t 4. EXIT");
                printf("\n\n\t\t\t\t\t Your Choice : \t");
                fflush(stdin);
                scanf("%d", &choice02);
                switch(choice02)
                {
                    //Search By Roll No.
                case 1:
                printf("\n\n\t\t Enter Roll No. to Search : \t");
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
                // Search by name
                case 2:while (ex!='n' || ex!='no')
                {
                       printf("\n\n\t\t Enter name to search : \t");
                       fflush(stdin);
                       gets(name01);
                       printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");

                       for(i=0;i<cn;i++)
                       {
                           comp=strcmp(name01,s1[i].name);
                           if(comp==0)
                           {
                            printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                            cn01++;
                           }
                       }
                       if(cn01==0)
                       printf("\n\n\t\t\t\t Oops!This entry does not exist.!");
                       printf("\n\n\n\t\t\t\t Do you want search for more entries by Name ? (y/n)  ");
                       fflush(stdin);
                       scanf("%c", &ex);
                }
                       break;

                //Search by Marks
                case 3:
                        //Not Printing a statement
                       printf("\n\n\t\t\t\t You want to search marks in : ");
                       printf("\n\n\t\t\t\t\t\t 1. English");
                       printf("\n\t\t\t\t\t\t 2. Hindi");
                       printf("\n\t\t\t\t\t\t 3. Math");
                       printf("\n\t\t\t\t\t\t 4. EVS");
                       printf("\n\t\t\t\t\t\t 5. TOTAL");
                       printf("\n\n\n\t\t\t\t\t Your Choice : \t");
                       fflush(stdin);
                       scanf("%d", &choice03);
                       switch(choice03)
                       {
                           //Search by marks in eng
                        case 1:printf("\n\n\t\t\t Enter Marks in English : \t");
                        fflush(stdin);
                        scanf("%d", &marks);
                        printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
                        for(i=0;i<cn;i++)
                         {
                            if(marks==s1[i].eng)
                             printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                         }
                         break ;
                         //search by marks in hindi
                         case 2:printf("\n\n\t\t\t Enter Marks in Hindi : \t");
                        fflush(stdin);
                        scanf("%d", &marks);
                        printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
                        for(i=0;i<cn;i++)
                         {
                            if(marks==s1[i].hin)
                             printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                         }
                         break ;
                         //search by marks in maths
                         case 3:printf("\n\n\t\t\t Enter Marks in Maths : \t");
                        fflush(stdin);
                        scanf("%d", &marks);
                        printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
                        for(i=0;i<cn;i++)
                         {
                            if(marks==s1[i].math)
                             printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                         }
                         break ;
                         //search by marks in evs
                         case 4:printf("\n\n\t\t\t Enter Marks in EVS : \t");
                        fflush(stdin);
                        scanf("%d", &marks);
                        printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
                        for(i=0;i<cn;i++)
                         {
                            if(marks==s1[i].evs)
                             printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                         }
                         break ;
                         //search by total marks
                         case 5:printf("\n\n\t\t\t Enter Total Marks : \t");
                        fflush(stdin);
                        scanf("%d", &marks);
                        printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
                        for(i=0;i<cn;i++)
                         {
                            if(marks==s1[i].total)
                             printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                         }
                         break ;
                       }


               // printf("\n\n\n\n\t\t\t\t\t Do you want to exit ? (y/n)\t");
               // scanf("%c", &ex);

                break ;
                }
        }
                break ;
                // Print all entries
        case 3:printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
               if(len>10)
               {
               for(i=0;i<cn;i++)
                    {
                        for(j=i+1;j<cn;j++)
                        {
                            if(s1[i].rollno>s1[j].rollno)
                            {
                                a=s1[i].rollno;
                                s1[i].rollno=s1[j].rollno;
                                s1[j].rollno=a;
                                s2=s1[i];
                                s1[i]=s1[j];
                                s1[j]=s2;

                                //flag=j;

                            }


                        }

                       // s2[k]=s1[flag];
                        printf("\n\t\t\t  %d\t%s\t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                    }
               }
               else if(len<10)
               {
                   for(i=0;i<cn;i++)
                    {
                        for(j=i+1;j<cn;j++)
                        {
                            if(s1[i].rollno>s1[j].rollno)
                            {
                                a=s1[i].rollno;
                                s1[i].rollno=s1[j].rollno;
                                s1[j].rollno=a;
                            }
                        }
                        printf("\n\t\t\t  %d\t%s      \t\t%d\t%d\t%d\t%d\t%d\t%c", s1[i].rollno,s1[i].name,s1[i].eng,s1[i].hin,s1[i].math,s1[i].evs,s1[i].total,s1[i].grade);
                    }
               }

                        break;
        //GradeWise Details
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
               //Topper Student
        case 5:printf("\n\n\t\t\t Topper Student : ");
               printf("\n\n\t\t\tRollNo.\tName\t\t\tEng\tHindi\tMaths\tEVS\tTotal\tGrade");
               for(i=0;i<cn;i++)
                {
                    if(hi<=s1[i].total)//Unable to print all the toppers.
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
