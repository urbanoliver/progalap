#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a = 0;
   double b = 0;


   printf("kerem az a es b ertekeket:");
   scanf("%lf, %ld", &a, &b);
   //printf("kerem a b erteket:");
   //scanf("%lf", &b);


    printf("kulonbseg: %.2lf\n", a-b);
    printf(" osszeg: %.2lf\n",a+b);
    printf(" szorzat: %.2lf\n", a*b);
    printf("osztas: %.2lf\n", a/b);




    return 0;
}
