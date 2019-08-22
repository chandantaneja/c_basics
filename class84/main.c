#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
  int sum(int,int);
  c=sum(a,b);
  printf("%d", c);
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
