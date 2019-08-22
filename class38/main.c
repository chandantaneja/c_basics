#include<stdio.h>
#include<stdlib.h>
/*we can add levels to this quiz*/
int  main ()
{
    int score=0, ques, nscore ;
    char ans1, ans2, ans3;
    char name[20];
    float per;
    printf("\n\n\t\t\t\t\t\t\t\t\t*******************************************************************************");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Welcome to My Game Show...!");
    printf("\n\n\t\t\t\t\t\t\t\t\t*******************************************************************************");
    printf("\n\n\n\n\n\t\t\t\t\t Please Enter Your Name To Continue : \t");
    gets(name);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t Thanks %s for Joining the Game.", name);
    getch();
    system("cls");
    printf("\n\n\n\n\t\t\t\t Press any key to continue...");
    getch();
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\t Following are the Rules of the Game :-");
    printf("\n\n\t\t\t\t\t\t 1. All questions have four options out of which only one is correct.");
    printf("\n\n\t\t\t\t\t\t 2. Each question can be Answered only once.");
    printf("\n\n\t\t\t\t\t\t 3. The answer once recorded cannot be changed under any circumstances.");
    getch();
    system("cls");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t ARE YOU READY ?");
    printf("\n\n\t\t\t\t\t Here comes the first question");
    printf("\n\n\t\t\t\t\t Ques1.   What is the Total Number of keyword in C Programming Language ?");
    printf("\n\n\t\t\t\t\t a.31  \t\t\t b.32");
    printf("\n\n\t\t\t\t\t c.33  \t\t\t d.34");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Your Ans : \t");
    scanf("%c", &ans1);
    if (ans1=='b')
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Correct Answer. Well Done!");
            score=score+1;
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t Your Current Score : \t%d", score);
        }
    else
       {
           printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Sorry! Thats Wrong.");
           score=score+0;
           printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t Your Current Score : \t%d", score);
       }
    getch();
    system("cls");
    printf("\n\n\t\t\t\t\t Ques2. How many states are there in India?");
    printf("\n\n\t\t\t\t\t a.26  \t\t\t b.27");
    printf("\n\n\t\t\t\t\t c.29  \t\t\t d.34");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Your Ans : \t");
    fflush(stdin);
    scanf("%c", &ans2);
    if (ans2=='c')
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Correct Answer. Well Done!");
            score=score+1;
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t Your Current Score : \t%d", score);
        }
    else
       {
           printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Sorry! Thats Wrong.");
           score=score+0;
           printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t Your Current Score : \t%d", score);
       }
    getch();
    system("cls");
        printf("\n\n\t\t\t\t\t Ques3.   Who invented C Programming Language ?");
    printf("\n\n\t\t\t\t\t a.Dennis Ritchie  \t\t\t b.Barack Obama");
    printf("\n\n\t\t\t\t\t c.Bill Gates  \t\t\t    d.Sundar Pichai");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Your Ans : \t");
    fflush(stdin);
    scanf("%c", &ans3);
    if (ans3=='a')
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Correct Answer. Well Done!");
            score=score+1;
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t Your Current Score : \t%d", score);
        }
    else
       {
           printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Sorry! Thats Wrong.");
           score=score+0;
           printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t Your Current Score : \t%d", score);
       }
    getch();
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t*************************************************************");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t THANKS %s FOR PLAYING...!", name);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t*************************************************************");
    ques=score/1;
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t                 Total Number of  Questions : \t 3");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t                 Total Number of Correct Questions : \t %d", ques);
    nscore=ques*1;
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t                 Your Net Score : \t %d", nscore);
    per=ques*100/3;
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t                 Percentile Score : \t %5.2f ", per);
    if (score>2)
    {
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t       OUTSTANDING PERFORMANCE...!");
    }
    else if (score<1)
    {
        printf("\n\n\n\n\n\n\t\t\t\t\t\t        \t\t\tPoor Performance.");
    }
    else if (score==2)
    {
        printf("\n\n\n\n\t\t\t\t\t\t\t   \t\t\tGOOD PERFORMANCE...!");
    }
return 0;

}
