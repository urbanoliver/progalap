#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    printf("Kerek egy egesz szamot\n");

    scanf("%d", &a);

    switch(a % 2 ){
    case 0: printf("paros\n");break;
    case 1: printf("paratlan\n");break;
    default: printf("Default ag\n");break;


    }



}

