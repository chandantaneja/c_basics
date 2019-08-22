#include <stdio.h>
#include <stdlib.h>

main ()
{
    int num,i,flag=0;
    printf("\n\n\t\t Enter a number : \t");
    scanf("%d", &num);
    for (i=2;i<num;i++)
    {
        if (num%i==0)
        {
            //printf("\n\n\t\t %d is Composite.", num);
            //break;
            flag=1;
            break;
        }

    }
       if (num==1)
            printf("\n\n\t\t 1 is neither prime nor composite.\n\n");
            else if (flag==0)
        printf("\n\n\t\t %d is prime.", num);

            else printf("\n\n\t\t %d is composite.", num);
      getch();

}
