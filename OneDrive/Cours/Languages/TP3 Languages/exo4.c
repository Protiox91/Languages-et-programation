#include <stdio.h>
#include <stdlib.h>

int moyenne(int *tab, int n)
{   
    int i;
    float moyenne,c; 

    for (i=0;i!=n;i++)
    {
        c = c + tab[i];
    }

    moyenne = c/n ;
    printf("La moyenne : %f \n", moyenne);
}

int main(){

    int i,n;
    puts("Veuillez entrer la taille du tableau");
    scanf("%d", &n);
    int *tab = malloc(n * __SIZEOF_INT__);

    for (i=0;i!=n;i++)
    {
        puts("Veuillez entrer la note ");
        scanf("%d", &tab[i]);
    }

    moyenne(tab, n);
}