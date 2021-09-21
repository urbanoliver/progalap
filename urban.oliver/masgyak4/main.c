#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int szam, oszto, db=0;

    printf("Kerek egy szamot\n");

    scanf("%d",&szam);
    oszto=1;
    while(oszto<=szam){
            if(szam % oszto == 0){
                    db++;}
            oszto++;

    }
    printf("\nOsztok szama: %d\n", db);*/
    /*int i,szam, db=0;
    for(i=1; i<=szam; i++){
            if(szam%i == 0){
            db++;}
        }
    printf("\nOsztok szama: %d\n", db);*/

    int a, b ,i;
    long int eredmeny= 1;

    printf("\nKerem a hatvany alapot es a kitevot vesszovel elvalasztva: ");

    if( scanf("%d,%d",&a, &b)!=2) {
        printf("Hibás adatok!\n");
        return 1;
    }

    else{for(i=1; i<=b; i++)
        eredmeny *=a;}

printf("\n%d %d. hatvanya: %ld\n",a ,b ,eredmeny);


    return 0;
}
