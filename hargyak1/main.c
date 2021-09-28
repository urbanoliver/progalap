#include <stdio.h>
#include <stdlib.h>

int main()
{
    int evszam, upper=0; // ZH intervallum feladat
    int ok, db = 0;
    char ch;

    /*printf("Kerek egy evszamot:  \n");

    scanf("%d," , &evszam);*/

    do{
        ok=1;
        printf("Add meg az intervallum also hatarat:  \n");

        if(scanf("%d", &evszam) !=1 || evszam<1000){
            printf("Hibas input! \n");
            ok=0;

            while ((ch=getchar())!='\n');
        }

    } while(!ok);

    do {
        ok=1;
        printf("Add meg az intervallum felso hatarat: \n");
        if(scanf("%d", &upper) !=1 || upper<evszam || upper>2021){
            printf("Hibas input! \n");
            ok = 0;
            while ((ch = getchar())!='\n');


        }
    }while(ok);

    for(int i= evszam; i<=upper; i++){
        db++;
        if ((i% 4 == 0) && (i % 100 !=0) || (i % 400 == 0 ))

    }
    printf("A %d es a %d evek kozott %d darab szokoev van", evszam, upper,db);





    if( ((evszam % 4 == 0) && (evszam % 100 !=0) || (evszam % 400 == 0 )))
        printf("Szokoev \n");
    else
        printf("Nem szokoev \n");

    return 0;
}
