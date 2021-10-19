#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alsohatar, felsohatar, i, j;
    int volte = 0;

    int_beolvas(&alsohatar);

    do {
            int_beolvas(&felsohatar);

    } while (felsohatar < alsohatar);

    for (i=alsohatar; i<=felsohatar; i++){

            for (j=i+1;j<=felsohatar;j++) {

                    if (baratsagos(i, j)==1){
                        printf("(%d,%d)\n", i, j);
                        volte=1;
                    }


                    }
            }
    if(volte == 0){
        printf("Nincs ilyen szampar");
    }

    return 0;

}
void int_beolvas(int* x) {
        char ch;
        int ok;
        do {
                ok = 1;
                printf("Adj meg egy szamot: ");
                if(scanf("%d", x)!=1) {
                printf("Hibas input\n");
                //hibás karakterek kitolvasása input bufferbõl
                while ((ch=getchar()) != '\n');
                ok = 0;
            }
        } while( !ok || *x<0 );
        return ;
}
int baratsagos(int a, int b) {
        if (a == kisebboszto_osszeg(b) && b == kisebboszto_osszeg(a)) return 1;
        return 0;
}
int kisebboszto_osszeg(int szam) {
        int osszeg, oszto;
        osszeg=0;
        for (oszto=1; oszto<=szam/2; oszto+=1) {
                if (szam%oszto == 0)
                        osszeg += oszto;
        }
        return osszeg;
}



