#include<stdio.h>
#include<stdlib.h>
#include "voiture.h"

#if 1 

int main(int argc, const char * argv[]){
    t_Voiture V1, V2;
    t_Voiture *ptrV2, *ptrV3;
    ptrV2 = &V2;
    ptrV3=(t_Voiture*)malloc(sizeof(t_Voiture));

    Affiche(&V1);
    Saisie(&V2);

    Affiche(ptrV2);
    Saisie(ptrV2);

    Affiche(ptrV3);
    Saisie(ptrV3);

    free(ptrV3);

    return 0;
}
#endif