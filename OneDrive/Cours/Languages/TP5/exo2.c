#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int * tabentier; char * tabchar;
    int nombre,conver,c,d,i,j,entier;
    char incr;

    puts("Veuillez entrer le nombre de caractères à entrer");
    scanf("%d", &nombre);
    tabentier = (int *)malloc((nombre + 1) * sizeof(int));
    tabchar = (char *)malloc((nombre + 1) * sizeof(char));

    // Entrée chiffre par chiffre en caractere dans une chaine de caractères et verification si entre 0 et 9 
    for (int i = 0; i < nombre; ++i) {
        c = 0;
        while(c==0){
            puts("Veuillez entrer le caractere en chiffre compris entre 0 et 9");
            scanf("%c", &incr);
            conver = incr - '0';
            for (int j = 0; i < 10; ++i) {
                if (conver == j){
                    tabchar[i] = incr;
                    printf("Le caractere est %c",tabchar[i]);

                    c=1;
                }else{
                    puts("Ce chiffre n'est pas compris entre 0 et 9");
                }
            }
        }
    }
    printf("%s",tabchar);

    // Conversion d'une chaine de caractere en un tableau d'entier 
    for (int i = 0; i < nombre; ++i) {
        tabentier[i] = tabchar[i] - '0'; // Conversion en int 
        printf("%d",tabentier[i]); // Test affichage
    }

    // Conversion tableau d'entier en une seule valeur 
    for (int i = 0; i < nombre; ++i) {
        entier = entier + (tabentier[i]*pow(10,i));
    }
    printf("%d",entier);
    
    free(tabentier); 
    free(tabchar);
}