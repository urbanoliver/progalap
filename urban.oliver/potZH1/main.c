#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*int size=10;
    int tomb[size];
    int i;
    int minertek=0;

    srand(time(0));

    for(i=0;i<size;i++){
        tomb[i]=rand()%(100-1+1)-1;
        printf("\nA tomb %d. eleme:%d",i+1,tomb[i]);        //1.feladat
        if(tomb[i]%2==1){
            tomb[i]=tomb[i]*(-1);
            printf("\n%d",tomb[i]);
            }

    }
    for(i=0;i<size;i++){
        if(tomb[i]<minertek){
            minertek=tomb[i];
        }

    }
    printf("\nA legkisebb szam: %d",minertek);*/
    /*int teniszezok[]={10645,9005,4410,3815,3805};

    int k,i;
    char c;
    int szam=4410;

    for(k=5;k<10;k++){
        do{                                 //2.feladat
        i=1;



        printf("\n A  %d. teniszezo pontszamai: ",k+1);
        if(scanf("%d", & teniszezok[k])!=1 )
                    {
                        printf("\nHibas adat!");

                        i=0;

                        while((c=getchar())!='\n');
                    }

        }while(!i);
    }
    i=0;
    while(i<10 && szam!=teniszezok[i]){
        i++;
    }
    printf("\nA teniszezo a %d. helyen all.",i);
    if(i<teniszezok[i]){
        printf("\nA teniszezo a %d. helyen all.",i+1);
    }

    for(k=9;k>=0;k--){
        printf("\n%d",teniszezok[k]);
    }*/
    /*double tomb1[]={6.3,8.5,7.3,7.5,8.1};
    double tomb2[]={3.7,4.7,5.2,5.3,5.7};           //3.feladat
    double elteresek[5];
    int i;
    int ok;
    char c;
    double ertek=0;

    printf("\nAz elso tomb adatai:");

    for(i=0;i<5;i++){
        printf("\n%.2lf",tomb1[i]);
    }
    printf("\nA masodik  tomb adatai:");

    for(i=0;i<5;i++){
        printf("\n%.2lf",tomb2[i]);
    }
    do{
        ok=1;
        printf("\nAdjon meg egy 0.3 es egy 0.5 kozotti erteket!");

        if(scanf("%lf",&ertek)!=1 || ertek>0.5 || ertek<0.3){
            printf("\nHibas adat!");
            ok=0;
        }
        //while((c=getchar)!='\n');
    }while(!ok);
    printf("\nA beolvasott ertek:%lf",ertek*100);

    for(i=0;i<5;i++){
        elteresek[i]=(tomb1[i]/tomb2[i]-1)*100;
        printf("\nAz elteresek szazalekban: %.2lf%%",elteresek[i]);
    }
    for(i=0;i<5;i++){
        if(elteresek[i]>ertek*100){
            printf("\nA %d. adat nagyobb a beolvasott erteknel: %.2lf%%",i+1,elteresek[i]);
        }
    }*/
    /*int ok;
    int n;
    int i;
    int kuszob;                                     //4.feladat

    int db=0;
    do{
        ok=1;
        printf("\nAdja mega a diakok letszamat!");
        scanf("\n%d",&n);
        ok=0;
    }while(ok);

    printf("\nA diakok letszama :%d",n);

    int magassag[n];
    printf("\nAdja meg az elso diak magassagat !");
    for(int i=0;i<n;i++){
        do{
            ok=1;
            if(scanf("\n%d",&magassag[i])!=1 || magassag[i]<0){
            printf("\nHibas adat!");
            ok=0;
            }

        }while(!ok);

    }

    for(int i=0;i<n;i++){
        printf("\nA %d. diak magassaga:%d",i+1,magassag[i]);
    }
    do{
        ok=1;
        printf("\nAdja mega kuszoberteket!");
        scanf("\n%d",&kuszob);
        ok=0;
    }while(ok);
    printf("\nA beolvasott kuszobertek:%d",kuszob);
    for(i=0;i<n;i++){
        if(magassag[i]<kuszob){
            db++;
        }
    }
    printf("\nA kuszobnel kisebb ertekek szam:%d",db);*/

    /*int alkatreszek[5]={1678,2533,3223};                //5.feladat
    int ok,i;
    char c;
    int szam;
    do{
        ok=1;
        printf("\nAdja meg a 4.napon legyartott alkatreszek szamat!");
        if(scanf("\n%d",&szam)!=1 || szam<1500 || szam>4500){
            printf("\nHibas adat!");
            ok=0;
        }
        while((c=getchar()!='\n'));
    }while(!ok);
    printf("\nA 4.napon legyartott alkatreszek:%d",szam);
    alkatreszek[3]=szam;

    srand(time(NULL));
    alkatreszek[4]=rand()%(4500+1-3500)+3500;

    printf("\nAz 5.napon legyartott alkatreszek szam:%d",alkatreszek[4]);

    for(i=4;i>=0;i--){
        printf("\nA %d. napon legyartott alkatreszek szama: %d",i+1,alkatreszek[i]);
    }
    for(i=0;i<4;i++){
        if(alkatreszek[i]<alkatreszek[i+1]){
            ok=1;
        }
        else{
            ok=0;
        }
    }
    if(ok==1){
        printf("\nMonoton");
    }
    else{
        printf("\nNem monoton");
    }*/
    /*int Aceg[5]={234,245,255,260,261};
    int Bceg[5]={202,213,222,205,207};                  //6.feladat
    int i;
    double atlag=0;
    int db=0;
    int Bosszes=0;
    int Aosszes=0;
    int kulonbseg=0;
    int ok,k;
    for(i=0;i<5;i++){
        atlag+=Aceg[i];
    }
    atlag=atlag/5;

    printf("\nA heten atlagosan eloallitott termekek: %.2lf",atlag);
    for(i=0;i<5;i++){
        if(Aceg[i]>250){
            db++;
        }
    }
    printf("\n\n %d napon volt tobb mint 250 a termekek szama.",db);

    for(i=0;i<5;i++){
        Bosszes+=Bceg[i];
    }
    printf("\n\nA Bceg %d termeket allitott elo a heten.",Bosszes);

    for(i=0;i<5;i++){
        Aosszes+=Aceg[i];
    }
    kulonbseg=Aceg-Bceg;
    printf("\n\nAz A ceg %d -vel termelt tobbet,mint a B ceg.",kulonbseg);

    for(i=0;i<5;i++){
        if(Aceg[i]<Aceg[i+1]){
            k++;
        }
    }
    for(i=0;i<5;i++){
        if(Bceg[i]<Bceg[i+1]){
            ok++;
        }
    }

    if(ok>k){
        printf("\nAz A ceg lett sikeres.");
    }
    else{
        printf("\nA B ceg lett sikeres.") ;
    }*/

    int pontszamok[12]={8,5,7,0,0,4};
    int i,ok;
    int db=0;
    double osszeg=0;
    int osszpont=120;
    double szazalek;
    char c;
    printf("\nAdja meg a tovabbi pontszamokat!");           //7.feladat
    for(i=6;i<12;i++){
            do{
                ok=1;

                if(scanf("\n%d",&pontszamok[i])!=1 || pontszamok[i]>10 || pontszamok[i]<1){
                    printf("\nHibas input!");
                ok=0;
                }
                while((c=getchar()!='\n'));
            }while(!ok);
    }
    for(i=0;i<12;i++){
        osszeg+=pontszamok[i];
        if(osszeg<=50){
            db++;
        }
    }
    printf("\nPista a %d. feladatnal erte el az 50 pontot.",db);
    printf("\nPista %.2lf%%-ot ert el.",osszeg/120*100);



    return 0;
}
