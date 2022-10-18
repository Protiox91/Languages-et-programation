#include "voiture.h"

#if 1 

int main(){
    t_voiture V1, V2;
    t_voiture* ptrV2, ptrV3;
    ptrV2 = &V2;
    ptrV3 = (t_voiture*)malloc(sizeof(t_voiture));

    Affiche(&V1);
    Saisie(&V2);

    Affiche(ptrV2);
    Saisie(ptrV2);

    Affiche(ptrV3);
    Saisie(ptrV3);

    free(ptrV3);
    ptrV3 = NULL;

    return 0;
}
#endif