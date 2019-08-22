#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rlno;
   /*
   char fname [];
   char lname [];*/
   float  eng, hindi, maths, evs, total, per ;

   printf("\n\n\t\t\t\t THIS IS THE AISSCE MARKSHEET");
   printf("\n\n\t\t\t\t Please Enter Your Details Carefully");
   /*printf("\n\n\n\n\t\t\t Enter Your First Name: \t");
   scanf("%c", fname);
   printf("\n\n\n\n\t\t\t Enter Your Last Name: \t");
   scanf("%c", lname);*/
   printf("\n\n\n\t\t\t\t Enter Your Roll No : \t");
   scanf("%d", &rlno);
   printf("\n\n\n\t\t\t\t Enter Your Marks In English: \t");
   scanf("%f", &eng);
   printf("\n\n\t\t\t\t Enter Your Marks In Hindi:\t ");
   scanf("%f", &hindi);
   printf("\n\n\t\t\t\t Enter Your Marks In Mathematics: \t");
   scanf("%f", &maths);
   printf("\n\n\t\t\t\t Enter Your Marks In E.V.S :\t");
   scanf("%f", &evs);
   total=eng+hindi+maths+evs;
   printf("\n\n\n\n\t\t\t\t YOUR TOTAL SCORE IS: %f", total);
   per=total/4;
   printf("\n\n\n\n\t\t\t\t PERCENTILE: %f", per);
   printf("\n\n\n\n\n\t\t\t\t\t\t\t THANKS");
   getchar();
}
