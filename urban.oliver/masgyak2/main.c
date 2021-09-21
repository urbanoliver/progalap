#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    printf("Kerek egy szamot: \n");

    scanf("%d", &a);

    if(a < 0){

            a=a*(-1);

    }

            printf("A szam abszoluterteke: %d " , a );
}

