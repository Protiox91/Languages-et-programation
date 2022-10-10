#include <stdio.h>
 
int main()
 
{
    int j,m,a,ml,al,as,ns,f;
    printf("saisir le jour: ");
    scanf("%d",&j);
    printf("saisir le mois: ");
    scanf("%d",&m);
    printf("saisir l'annee: ");
    scanf("%d",&a);
 
    switch (m)
    {
        case 1:
            ml=m+10;
            al=a-1;
            break;
 
         case 2:
            ml=m+10;
            al=a-1;
            break;
 
        case 3:
            ml=m-2;
            al=a;
            break;
        case 4:
            ml=m-2;
            al=a;
            break;
        case 5:
            ml=m-2;
            al=a;
            break;
         case 6:
            ml=m-2;
            al=a;
            break;
        case 7:
            ml=m-2;
            al=a;
            break;
 
        case 8:
            ml=m-2;
            al=a;
            break;
 
        case 9:
            ml=m-2;
            al=a;
            break;
 
        case 10:
            ml=m-2;
            al=a;
            break;
 
        case 11:
            ml=m-2;
            al=a;
            break;
 
        case 12:
            ml=m-2;
            al=a;
            break;
    }
 
     ns=al/100;
     as=al%100;
 
     f=j+as+(as/4)-2*ns+(ns/4)+((26*ml-2)/10);
 
    switch (f)
    {
        case 1:
            printf("lundi");
            break;
 
        case 2:
            printf("mardi");
            break;
 
        case 3:
            printf("mercredi");
            break;
 
        case 4:
            printf("jeudi");
            break;
 
        case 5:
            printf("vendredi");
            break;
 
        case 6:
            printf("samedi");
            break;
 
        case 7:
            printf("dimanche");
            break;
    }
}