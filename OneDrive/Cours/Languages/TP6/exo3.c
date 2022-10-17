#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    unsigned int puissance;
    float prix;
    char marque[11];
    char modele[11];
}t_Voiture;

void Saisie(t_Voiture *ptrV1){
    puts("Entrez la marque du vehicule");
    scanf("%s", &ptrV1->marque);

    puts("Entrez le modèle du vehicule");
    scanf("%s", &ptrV1->modele);

    puts("Entrez le prix du véhicule");
    scanf("%f", &ptrV1->prix);

    puts("Entrez le nombre de chevaux fiscaux");
    scanf("%u", &ptrV1->puissance);
    
}

void Affiche(t_Voiture *ptrV1){
    printf("Marque : %s \n", ptrV1->marque);
    printf("Prix : %f Euros TTC \n",ptrV1->prix );
    printf("Puissance : %u CV \n", ptrV1->puissance);
    printf("Modele : %s \n", ptrV1->modele);
}


int main(){
    t_Voiture *ptrV1 ;
    ptrV1=(t_Voiture*)malloc(sizeof(t_Voiture));

    Saisie(ptrV1);
    Affiche(ptrV1);

    free(ptrV1);
    return 0;
}