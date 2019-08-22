#include <stdio.h>
#include <stdlib.h>

main()
{
    int num,i,flag=0,j;

    for (j=1;j<=100;j++)
    {
        num=j;
        for (i=2;i<num;i++)
        {
            if (num%i==0)
            {
                flag=1;
                break;
            }
        }
       if (flag==0)
        printf("\t\t %d \t", num);
       flag=0;
    }

}
