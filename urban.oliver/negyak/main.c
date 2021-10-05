#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time() függvényhíváshoz
#define MERET 5


int main()
{
    int i, j;    //LOTTO

    int lotto[MERET], jelolt;

    srand(time(0));
     // véletlenszám generátor inicializálása
    for (i=0; i<MERET; ) {
            jelolt = rand()%90+1;

             // rand()%x : [0...x) intervallumból ad vissza egy egész számot

        for(j=0; j<i; j++) {
            if (lotto[j] == jelolt) // ismétlõdés elkerülése
        break;
 }
    if (j==i) {
      lotto[i] = jelolt;
        i++;
 }
 }
 //tömb kiírása
         for(i=0; i<MERET; i++) {
            printf("%d. szam: %d\n", i+1, lotto[i]);
 }
    /*int tomb[10];
    int meret = 10;


    for(int i =0; i<meret; i++){
           tomb[i] = i*2;

    }
    for(int i =0; i<meret;i++){
             printf("Az a %d. elem: %d\n", i, tomb[i]);

    }*/




    return 0;
}
