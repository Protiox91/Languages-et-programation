#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,n;
    puts("Veuillez entrer le nombre de caractères");
    scanf("%d", &n);
    int *tab = malloc(n * __SIZEOF_INT__);
    char *chaine = malloc(n * __SIZEOF_WCHAR_T__);

    for (i=0;i!=n;i++)
    {
        puts("Veuillez entrer la note ");
        scanf("%s", &chaine[i]);
    }

    for (i=0;i!=n;i++)
    {
        tab[i] = chaine[i];
    }
}