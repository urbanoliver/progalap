#include <stdio.h>
#include <stdlib.h>

/*void beolvas(float *tomb, int meret);
void kiir(float *tomb, int meret);

int main()
{
    const int n = 12;
    float tomb[12];

    beolvas(tomb, n);
    kiir(tomb, n);

    return 0;
}
void beolvas(float *tomb, int meret) {
    int i, ok;
    char ch;
    for(i=0; i<meret; i++) {
        do {
            ok = 1;
            printf("%d. ertek: ", i+1);
            if (scanf("%f", &tomb[i])!=1) {
                    printf("Hibas input\n");
                    ok = 0;
            }
            while ((ch=getchar()) != '\n');
        } while ( !ok );
    }
    return ;
}
void kiir(float *tomb, int meret) {
    int i;
    for(i=0; i<meret; i++) {
        printf("%d. ertek: %.2f \n", i+1, tomb[i]);
    }
    return ;
}*/
void float_feltolt(float *tomb, int meret);
int szamlal(float *tomb, int meret, float limit);

int main() {
        const int n = 12;
        int db;
        float tomb[12], limit = 300.0;
        float_feltolt(tomb, n);
        db = szamlal(tomb, n, limit);
        printf("Az arfolyam erteke %d-szer volt %.2f alatt.", db, limit);
    return 0;
}
void float_feltolt(float *tomb, int meret) {
        int i;
        srand(time(0));
        int upper = 280, lower = 311;
        double range = upper - lower;
        double div = RAND_MAX / range;
        double value;
        for (i=0; i<meret; i+=1) {
 //tomb[i] = (double)(rand()%(upper-lower+1)+lower); // pl.: 310.000000
                value = lower + (rand()/div); // pl.: 310.123456
                tomb[i] = round(void beolvas(float *tomb, int meret);
int monoton_e(float *tomb, int meret); //1-t (igaz) vagy 0-t (hamis) ad visssza
int main() {
 int i, n = 12;
 float tomb[12];
 beolvas(tomb, n);
 //Monotonitás vizsgálata
 if ( monoton_e(tomb, n) ) printf("Az Euro árfolyama monoton nõtt.");
 else printf("A számsorozat nem monoton növõ.");
 return 0;
}value*100) / 100; // pl.: 310.120000
        }
 return ;
}
int szamlal(float *tomb, int meret, float limit) {
        int i, db=0;
        for (i=0; i<meret; i+=1) {
            if (tomb[i] < limit) db++;
        }
        return db;
}


