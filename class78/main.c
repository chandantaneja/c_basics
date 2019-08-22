#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a=1234,cn=0,rev=0,b;
//printf("Test1");
    while (a!=0)
    {
        b=a%10;
        rev=rev*10+b;
        a=a/10;
        cn++;
    }
//printf("Test1");
    while (cn!=0)
    {
        b=rev%10;
        switch(cn)
        {
            case 4: switch(b)
            {
                case 1: printf("One Thousand");
                break;
                case 2: printf("Two Thousand");
                break;
                case 3: printf("Three Thousand");
                break;
                case 4: printf("Four Thousand");
                break;
                case 5: printf("Five Thousand");
                break;
                case 6: printf("Six Thousand");
                break;
                case 7: printf("Seven Thousand");
                break;
                case 8: printf("Eight Thousand");
                break;
                case 9: printf("Nine Thousand");
                break;
            }
            break;
           case 3: switch(b)
           {
                case 1: printf("One Hundred");
                break;
                case 2: printf("Two Hundred");
                break;
                case 3: printf("Three Hundred");
                break;
                case 4: printf("Four Hundred");
                break;
                case 5: printf("Five Hundred");
                break;
                case 6: printf("Six Hundred");
                break;
                case 7: printf("Seven Hundred");
                break;
                case 8: printf("Eight Hundred");
                break;
                case 9: printf("Nine Hundred");
                break;
           }
           break;
           case 2: switch(b)
           {
                case 1: printf("ten");
                break;
                case 2: printf("Twenty");
                break;
                case 3: printf("Thirty");
                break;
                case 4: printf("Forty");
                break;
                case 5: printf("Fifty");
                break;
                case 6: printf("Sixty");
                break;
                case 7: printf("Seventy");
                break;
                case 8: printf("Eighty");
                break;
                case 9: printf("Ninety");
                break;
           }
           break;
           case 1: switch(b)
           {
                case 1: printf("One");
                break;
                case 2: printf("Two");
                break;
                case 3: printf("Three");
                break;
                case 4: printf("Four");
                break;
                case 5: printf("Five");
                break;
                case 6: printf("Six");
                break;
                case 7: printf("Seven");
                break;
                case 8: printf("Eight");
                break;
                case 9: printf("Nine");
                break;
           }
           break;

        }

cn--;
rev/=10;
    }
    getch();
}
