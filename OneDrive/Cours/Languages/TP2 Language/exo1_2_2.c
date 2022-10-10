#include <stdio.h>
 
int main()
{
    int i = 1;
    int j;
    int valeur;
    int d = 1;
    int e = 1;
 
    printf("x/y");
    printf("\t|");
 
    while (d<=10){
        printf("\t%d", d);
        d++;
    }
    printf("\n");
    while (e<=90){
        printf("-");
        e++;
    }
    printf("\n");
 
 
    while (i <= 10) {
        printf("%d", i);
        j = 1;
        printf("\t|");
        while (j <= 10){
            valeur = i*j;
            printf("\t%d",valeur);
            j++;
        }
        printf("\n");
        i++;
    }
}