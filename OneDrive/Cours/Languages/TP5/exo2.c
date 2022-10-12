#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num, len=0;
    int i,j,c,n;
    char incr;
    char chaine;
    puts("Veuillez entrer le nombre de caractères à entrer");
    scanf("%d", &n);
    int *tab;
    char *chai;

    
    len=(num==0)?1:log10(num)+1;  

    tab = malloc((len+1)*sizeof(int));
    chai = malloc((len+1)*sizeof(char));


    while (i<5 && j<5)
    {
        if (a[i]==b[j]){
            c=1;
        }else
        {
            c=0;
        }
        i++;
        j++;
    }
    for (i=0;i!=n;i++)
    {
        puts("Veuillez entrer le chiffre");
        for 
        scanf("%c", &chai[i]);
    }

    for (i=0;i!=n;i++)
    {
        tab[i] = chai[i];
    }
    printf("%d",&tab);
}