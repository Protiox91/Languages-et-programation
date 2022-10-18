#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifndef voiture
#define voiture

typedef struct
{
    unsigned int puissance;
    float prix;
    char marque[11];
    char modele[11];
}t_Voiture;

void Saisie(t_Voiture *voiture);
void Affiche(t_Voiture *voiture);

#endif
