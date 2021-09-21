#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Kerek egy egesz szamot\n");

    scanf("%d", &a);

    printf((a % 2 == 0) ? "paros" : "paratlan") ;

    if(a % 2 == 0) {
            printf("paros");

    }else {
        printf("paratlan");
    }




    return 0;
}
