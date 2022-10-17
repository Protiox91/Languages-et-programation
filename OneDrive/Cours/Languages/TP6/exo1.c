#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    unsigned int puissance;
    float prix;
    char marque[11];
    char modele[11];
}t_Voiture;

int main(){
    t_Voiture V1 = {10,1200.00,"Peugeot", "909"};

    printf("Marque : %s \n", V1.marque);
    printf("Prix : %f Euros TTC \n", V1.prix);
    printf("Puissance : %u CV \n", V1.puissance);
    printf("Modele : %s \n", V1.modele);

    strcpy(V1.marque , "Renault");
    strcpy(V1.modele , "Clio");

    V1.prix = 10000;
    V1.puissance = 5;

    printf("Marque : %s \n", V1.marque);
    printf("Prix : %f Euros TTC \n", V1.prix);
    printf("Puissance : %u CV \n", V1.puissance);
    printf("Modele : %s \n", V1.modele);

    return 0;
}