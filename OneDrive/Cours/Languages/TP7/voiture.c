#include "voiture.h"

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
    printf("Modele : %s \n", ptrV1->modele);
    printf("Puissance : %u CV \n", ptrV1->puissance);
    printf("Prix : %f Euros TTC \n",ptrV1->prix );
}