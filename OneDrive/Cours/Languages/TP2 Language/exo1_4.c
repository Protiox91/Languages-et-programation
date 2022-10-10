#include <stdio.h>

int main(){
  
  int somme=0, nbr, i;
  
  printf(" Entrez un nombre: ");
  scanf("%d",&nbr);
  
  for(i = 1; i < nbr; ++i){
    if(nbr%i == 0){
      somme = somme + i;
    }
  }
  if(somme == nbr){
    printf("Nombre parfait");
  }  
  else{
    printf(" n'est pas un Nombre parfait");
  }
  return 0;
}