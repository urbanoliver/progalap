#include <stdio.h>
#include <stdlib.h>
//B csoport
#define N 10
#include <time.h>
int main()
{
    int szam[N]={};
    int i;
    int szam2;
    int lowest=0;


    srand(time(0));

    for(i=0;i<10;i++){
        szam2=rand()%(100-1)+1;

        if(szam2/2==1){
            szam2=szam2*(-1);
        }
        else{
            szam2=szam2;
        }

        printf("\nA tomb elemei:%d",szam2);
    }
    if(szam[N]>szam[N-1]){
        printf("\nA sorozat legkisebb eleme:%d",szam[N-1]);
    }





    return 0;
}
