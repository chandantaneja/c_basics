#include <stdio.h>
#include <stdlib.h>

/*void swap(int,int);
int main ()
{
    int x, y;
    printf("\n\n\t\t Enter Two nos. : \t ");
    scanf("%d%d", &x, &y);
    printf("\n\n\t\t Before Swapping x= %d y=%d", x, y);
    swap(x,y);
    printf("\n\n\t\t After Swapping x=%d y=%d", x, y);
    return 0;
}
void swap(int a, int b)
{


int temp;
temp=b;
b=a;
a=temp;
printf("\n\n\t\t The values of a and b is %d %d", a, b);
}*/
void swap(int*, int*);
int main()
{
    int x, y;
    printf("\n\n\t\t Enter Two nos. : \t ");
    scanf("%d%d", &x, &y);
    printf("\n\n\t\t Before Swapping x= %d y=%d", x, y);
    swap(x,y);
    printf("\n\n\t\t After Swapping x=%d y=%d", x, y);
    return 0;
}
void swap(int*a, int*b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("\n\n\t\t The values of a and b is %d %d", *a, *b);
}
