#include <stdio.h>
#include <stdlib.h>
typedef struct book {
            char cim[50];
            char szerzo[50];
            int ev;
            float ar;
} Book;
typedef struct {
        Book* gyujtemeny;
        int darab;
} Selection;

void beolvas(Book * konyvtar, int meret);
void kiir(Book * konyvtar, int meret);
Selection kivalogat(Book * konyvtar, int meret, int tol, int ig);


int main()
{
    int tol = 1995, ig = 2000;

    const int meret = 10;

    Book konyvtar[meret];

    beolvas(konyvtar, meret);

    kiir(konyvtar, meret);

    Selection s = kivalogat(konyvtar, meret, tol, ig);

    kiir(s.gyujtemeny, s.darab);
    free(s.gyujtemeny);

    return 0;
}
Selection kivalogat(Book * konyvtar, int meret, int tol, int ig) {
    Selection s;
    int i, j, db = 0;
    for (i=0; i<meret; i++) {
            if (konyvtar[i].ev >= tol && konyvtar[i].ev <= ig)
            db++;
    }
    Book* valogatas = (Book *)malloc(db*sizeof(Book));
    if (valogatas == NULL) {
        printf("\nNincs eleg memoria!\n"); exit(-1);
    }
    j=0;
    for (i=0; i<meret; i++) {
        if (konyvtar[i].ev >= tol && konyvtar[i].ev <= ig)
                valogatas[j++] = konyvtar[i];
    }
    s.darab = db;
    s.gyujtemeny = valogatas;
    return s;
}

void beolvas(Book *konyvtar, int meret){
    for(int i=0;i<meret;i++){
        printf("\nAz %d. konyv cime: ",i+1);
        scanf("%s",konyvtar[i].cim);
        printf("\nA konyv szerzoje: ",i+1);
        scanf("%s",konyvtar[i].szerzo);
        printf("\nA %d.konyv megjelenesi eve: ",i+1);
        scanf("%d",konyvtar[i].ev);
        printf("\nA %d. konyv ara: ",i+1);
        scanf("%lf",konyvtar[i].ar);

    }

}
void kiir(Book *konyvtar, int meret){
    for(int i=0;i<meret;i++){
         printf("\nAz %d. konyv cime: %s",i+1,konyvtar[i].cim);
         printf("\nA konyv szerzoje: %s",i+1,konyvtar[i].szerzo);
         printf("\nA %d.konyv megjelenesi eve: %d",i+1,konyvtar[i].ev);
         printf("\nA %d. konyv ara: %lf",i+1,konyvtar[i].ar);
    }

}
