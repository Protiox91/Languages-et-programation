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
    t_Voiture *ptrV1 ;
    ptrV1=&V1;

    ptrV1->puissance = 5;
    ptrV1->prix = 10000; 
    strcpy(ptrV1->marque , "Renault");
    strcpy(ptrV1->modele , "Clio");

    printf("Marque : %s \n", ptrV1->marque);
    printf("Prix : %f Euros TTC \n",ptrV1->prix );
    printf("Puissance : %u CV \n", ptrV1->puissance);
    printf("Modele : %s \n", ptrV1->modele);

    return 0;
}