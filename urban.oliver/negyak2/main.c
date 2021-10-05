#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, db=0;

 /* Tömb létrehozása inicializációs listával */
    double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};

    int meret = sizeof(tomb)/sizeof(double); //tömb méretének kiszámítása

    double limit=300.0;

    /*for (int i=0;i<meret;i++){
        printf("%.lf\n",tomb[i]);
    }*/

    printf("HUF/EUR arfolyamok:\n");

    for (i=0; i<meret; i+=1) {
                printf("%d. ertek: %lf", i+1, tomb[i]);


 /* Feltételt kielégítõ elemek megszámlálása */
        if (tomb[i] < limit)
            db++;
 }
        printf("Az arfolyam erteke %d-szer volt %.2f alatt.", db, limit);


    return 0;
}
