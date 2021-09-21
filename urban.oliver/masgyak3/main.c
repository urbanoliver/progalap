#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum=0;

    printf("Kerek egy szamot\n");

    scanf("%d",&n);
    i=1;
    while (i <= n ){
    sum += i;
    i++;


    }
    printf("\nOsszeg : %d\n", sum);

    int n2, sum2=0;

    printf("Kerek egy szamot\n");

    scanf("%d",&n2);
    do {
    sum2 += n2;
    n2--;


    }
    while(n2>0);
        printf("\nOsszeg : %d\n", sum2);

    return 0;
}
