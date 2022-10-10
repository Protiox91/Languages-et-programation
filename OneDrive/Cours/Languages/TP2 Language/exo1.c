#include <stdio.h>
#include <stdlib.h>
 
int puissance(int x, int y)
{
    // Variables
    int compteur, resultat;
 
    compteur = 0;
    resultat = 1;
 
    while (compteur <= y-1){
        resultat = resultat * x;
        printf("%d\n", resultat);
        compteur ++;
    }
    return resultat;
}
 
int main(){

    // Variables
    int x,y, resultat;
 
    printf("Insérer la valeur de x : \n");
    scanf("%i", &x);
 
    printf("Insérer la puissance y : \n");
    scanf("%i", &y);
 
    if (y==0) {
        printf("Le resultat est 1");
    } else {
        if (x==0){
            printf("Le resultat est 0");
        } else {
            resultat = puissance(x,y);
            printf("le resultat est : %i",resultat);
        }
    }
    return 0;
}