#include <stdio.h>
#include <stdlib.h>
#define ESC 27 // Esc billenty� ASCII k�dja Unix op.rendszerben
#define N 100
void beolvas(char *szoveg);
char* forditvamasol(const char *forras, char *cel);
int main()
{
    char szoveg[N], forditott[N];
    beolvas(szoveg);
    ("A beolvasott sz�veg:\n%s", szoveg);
    char *p;
    p = forditvamasol(szoveg, forditott); //'p' a ford�tott karaktert�mb elej�re mutat
    printf("\nA sz�veg megford�tva:\n%s", p);
return 0;
}
void beolvas(char *szoveg) {
 int i=0;
 char ch;
 printf("Esc+Enter lenyomasaig olvassa a karaktereket:\n");
 while ((ch=getchar()) != ESC) { // lehet benne sz�k�z
 szoveg[i] = ch;
 i++;
 }
 szoveg[i] = '\0';
 return ;
}
char* forditvamasol(const char *forras, char *cel) {
 char *seged = cel;
 int i = strlen(forras)-1;
 while (i>=0) {
 *cel = forras[i];
 cel++;
 i--;
 }
 *cel = '\0';
 return seged;
}
