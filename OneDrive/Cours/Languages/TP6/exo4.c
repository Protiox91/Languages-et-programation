#include<stdio.h>
#include<stdlib.h>
#define N 2

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
    int i;
    t_Voiture *tab[N];

    for(i=0; i<N; i++){
        tab[i] = (t_Voiture*)malloc(sizeof(t_Voiture));
        Saisie(tab[i]);
        Affiche(tab[i]);
    }

    for(i=0; i<N; i++){
        tab[i] = (t_Voiture*)malloc(sizeof(t_Voiture));
        free(tab[i]);
    }
    return 0;
}