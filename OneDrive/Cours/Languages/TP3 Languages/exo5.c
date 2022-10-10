#include <stdio.h>
#include <stdlib.h>

int main(){
    // Question 1 - Utilisation de sizeof
    int entier ;
    printf("La taille en octets de cet entier est de : %d octet(s) \n", sizeof(entier));

    // Question 5 - Utilisation de sizeof pour une chaine de caractères
    char txt ;
    printf("La taille en octets de ce char est de : %d octet(s) \n", sizeof(txt));

    // Question 2 
    int i [ 2 ] ;
    char tab [7]={0x42 , 0x6C , 0x65 , 0x75 , 0x00 , 0x74 , 0x00 } ;
    char *pc ;
    int *pi ;

    pc = tab ;
    *i = 0x0602E3FF ;
    *(i+1) = 0x0001000F ;
    pi = i+1;

    printf("pc = %d - *î = %d - *(i+1)= %d - pi = %d \n",pc,i,*(i+1), pi);

    *pi = 255;

    printf("pc = %d - *î = %d - *(i+1)= %d - pi = %d \n",pc,*i,*(i+1), pi);

    printf( "\n<%s>\n" , tab );


    *(pc+4) = tab[2];
    printf("pc = %d - tab = %d ",pc ,tab);

    printf( "\n>%s<\n" , pc ) ;

}