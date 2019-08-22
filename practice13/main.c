#include<stdio.h>
#include<stdlib.h>

void main()
{
    int choice;
    float  num1, num2, sum;
    printf("\n\n\n\t\t\t\t Hello, This is a simple calculator.");
    printf("\n\n\n\t\t\t Please Enter Your Choice:");
    printf("\n\n\n\n\t\t 1. ADDITION");
    printf("\n\n\t\t 2. SUBTRACTION");
    printf("\n\n\t\t 3. MULTIPLICATIONM");
    printf("\n\n\t\t 4. DIVISION");
    printf("\n\n\t\t Your Choice : ");
    scanf("%d", &choice);
    getch();
    system("cls");
    if (choice==1)
    {
       printf("\n\n\n\t\t\t\t\t\t\t This Is a Simple Addition calculator for 2 Numbers... ");
       printf("\n\n\n\n\t\t\t\t\t\t\t\t        ");
       scanf("%f", &num1);
       printf(" + ");
       scanf("%f", &num2);
       sum=num1+num2;
       printf("\n\n\t\t\t\t\t\t\t\t 7.4%f + 7.4%f = 11.4%f", num1,num2,sum);
    }
    else if (choice==2)
    {
       printf("\n\n\n\t\t\t\t\t\t\t This Is a Simple Subtraction calculator for 2 Numbers... ");
       printf("\n\n\n\n\t\t\t\t\t\t\t\t        ");
       scanf("%f", &num1);
       printf(" - ");
       scanf("%f", &num2);
       sum=num1-num2;
       printf("\n\n\t\t\t\t\t\t\t\t 11.4%f - 11.4%f = 11.4%f", num1,num2,sum);

    }
   else if (choice==3)
   {
       printf("\n\n\n\t\t\t\t\t\t\t This Is a Simple Multiplication calculator for 2 Numbers... ");
       printf("\n\n\n\n\t\t\t\t\t\t\t\t        ");
       scanf("%f", &num1);
       printf(" * ");
       scanf("%f", &num2);
       sum=num1*num2;
       printf("\n\n\t\t\t\t\t\t\t\t 11.4%f * 11.4%f = 11.4%f", num1,num2,sum);



   }
    else if (choice==4)
    {
        printf("\n\n\n\t\t\t\t\t\t\t This Is a Simple Division calculator for 2 Numbers... ");
       printf("\n\n\n\n\t\t\t\t\t\t\t\t        ");
       scanf("%f", &num1);
       printf(" / ");
       scanf("%f", &num2);
       sum=num1/num2;
       printf("\n\n\t\t\t\t\t\t\t\t 11.4%f / 11.4%f = 11.4%f", num1,num2,sum);
    }
     else printf("Invalid Choice");

}
