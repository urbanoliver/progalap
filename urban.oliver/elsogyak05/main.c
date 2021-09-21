#include <stdio.h>
#include <math.h>

int main()
{
    int a=0,b=0,c=0;
    double t=0, t2=0, s=0;
    printf("A haromszog oldalai: ");
    scanf("%d, %d, %d ", &a,&b,&c);
    s = (double)(a+b+c) /2;
    t2 = s*(s-a)*(s-b)*(s-c);
    t = sqrt (t2);

    printf("\n A haromszog terulete: %.2f, kerulete: %d\n", t, a+b+c);
    return 0;
}
