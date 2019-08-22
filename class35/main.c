#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("\n\n\t\t Enter 5 Numbers:\t");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    if(a>b&&a>c&&a>d&&a>e)
    {
        printf("\n\n\t\t A is Greatest.\n");
    }
    else if(b>c&&b>d&&b>e){
        printf("\n\n\t\tB is Greatest.\n");
    }
    else if (c>d&&c>e){
        printf("\n\n\t\tC is Greatest.\n");
    }
    else if(d>e){
        printf("\n\n\t\tD is Greatest.\n");

    }
    else {
        printf("\n\n\t\t E is Greatest.\n");
    }
    getch();

    system("cls");













    return 0;
}
