#include <stdio.h>
#include <stdlib.h>

main ()
/*{
    int fahr, cel;
    fahr=0;
    cel=0;
    while (fahr<=300)
    {
        cel=5(fahr-32)/9;
        printf("%d \t %d \n", fahr, cel);
        fahr=fahr+20;
    }

}*/
{

    int fahr;
    float celcius;
    for (fahr =300;fahr >=0; fahr=fahr-20)
    {

        celcius=(5.0/9.0)*(fahr-32);
        printf("%6d   - %6.1f \n",fahr, celcius );
    }
}
