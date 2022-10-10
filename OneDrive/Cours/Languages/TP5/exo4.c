#include <stdio.h>
#define FINCH '\n'
 
 
void main ( )
{
    int c;
    int i=0;
    int j=0;

    puts("Veuillez entrer la taille de la chaine");
    scanf("%d", &n);
    char *a = malloc(n * __SIZEOF_WCHAR_T__);
    puts("Entrer la chaine de caractère");
    scanf("%s",a);

    puts("Veuillez entrer la taille de la chaine");
    scanf("%d", &n);
    char *b = malloc(n * __SIZEOF_WCHAR_T__);
    puts("Entrer la chaine de caractère");
    scanf("%s",b);

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
    if (c==1){
            printf("Les deux chaine de caractere sont identiques");
    }
    else{
            printf("Les deux chaine de caractere ne sont pas identiques");
    }
}