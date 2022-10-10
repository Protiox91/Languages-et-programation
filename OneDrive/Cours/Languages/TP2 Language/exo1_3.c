#include <stdio.h>

//
int main()
{
    int nombre;
    printf("Entrez un nombre: ");
    scanf("%d",&nombre);

    int i = 2;
    int j ;
    int compt = 1;
    int res = 1; 
    while (i < nombre) {
        if (nombre%i == 0) res = 0;
        i++;
    }
    if (res == 1) printf("%d est un nombre premier\n", nombre);
    else {
        printf("%d n’est pas un nombre premier\n", nombre);
        while (j = 0) {
            compt++ ;
            if (nombre%compt == 0){
                j = 1;
            }
        }
        printf("Son plus petit diviseur est : %d \n", compt);
    }

}