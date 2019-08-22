#include <stdio.h>
#include <stdlib.h>

main()
{
    int i,j,len;
    char str1[1000], str2[1000];
    printf("\n\n\t\t Enter string : ");
    gets(str1);
    printf("\n\n\t\t Before reversing : %s", str1);
    len=strlen(str1);
    for(i=len - 1,j=0;str1[j]!=0;i--,j++)//yaha pr j hi use krege.
    {
        str2[j]=str1[i];

    }
    str2[j]=0;
    printf("\n\n\t\t After Reversing : %s", str2);
    getch();

}
