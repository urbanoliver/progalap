#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kiir(int randomletter);
void ismetlodik_e(int *randomletter);
void beolvas(int *betu);
//int megszamol(int *betu int *randomletter);

int main()
{
    int randomletter,betu;

    kiir(randomletter);

    //ismetlodik_e();

    beolvas(&betu);

    //megszamol();

    return 0;
}
int kiir(int randomletter){
    int i;
    srand(time(NULL));
    for(i=0;i<10;i++){

        char randomletter = 'A' + (rand() % 26);
        printf("%c",randomletter);
    }
    return randomletter;
}
/*void ismetlodik_e(int *randomletter){
        int i;

        for(i=0;i<size;i++){
            if()
        }


}*/
void beolvas(int *betu){
    int ok;
    do{
       ok=0;
       printf("\nKerek egy betut:");
       scanf("%c",betu);
       ok=1;
        while(getchar()!='\n');
    }while(!ok);
    return;
}
/*int megszamol(int *betu int *randomletter){



}*/
