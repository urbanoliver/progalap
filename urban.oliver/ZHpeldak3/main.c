#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tomb_feltolt(char *abc);
void ismetlodik_e(char *abc);
char beolvas_char(char betu);
int megszamol (char *abc,char betu);

int main()
{
    char abc[10];
    char betu;
    tomb_feltolt(abc);
    ismetlodik_e(abc);
    beolvas_char(betu);
    megszamol(abc,betu);
    printf("\nA betu %d-szor van benne a sorban",megszamol(abc,betu));

    return 0;
}
int tomb_feltolt(char *abc){
    int i;
    int size=sizeof(abc);
    srand(time(NULL));
    for(i=0;i<size;i++){
        abc[i]='A'+(rand() % 26);
        printf("%c",abc[i]);
    }
    return abc;

}
void ismetlodik_e(char *abc){
    int i;
    int size=sizeof(abc);
    for(i=0;i<size;i++){
        if(abc[i]==abc[i+1]){
            printf("\nVan ismetlodes.");
        }
        else{
            printf("\nNincs ismetlodes.");
        }
     }

    return;
}
char beolvas_char(char betu){
    int ok;
    do{
        printf("\nAdjon meg egy betut!");
        ok=0;
        scanf("%c",&betu);
        ok=1;

    }while(!ok);

    return;
}
int megszamol(char *abc,char betu){
    int db=0;
    int i;
    int size=sizeof(abc);
    for(i=0;i<size;i++){
        if(abc[i]==betu){
            db++;
        }

    }

    return db;

}
