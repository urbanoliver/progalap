#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    double r = 0;
    double k = 0;
    double t = 0;
    //double pi = 3.14;

    printf("Kerem a kor sugarat: \n");
    scanf("%lf",&r);

    k=2*r*PI;
    t=r*r*PI;

    printf("A kor terulete: %lf \n a kor kerulete: %lf \n", t, k );

    return 0;



}
