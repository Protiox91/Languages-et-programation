#include <stdio.h>

void echange1 ( int a , int b ){

    int tampon ;
    tampon = b ;
    b = a ;
    a = tampon ;
}

void echange2 ( int *a , int *b ){
    int tampon ;
    tampon = *b ;
    *b = *a ;
    *a = tampon ;
}

void main ( ){
    int u=3, v=4;

    echange2(&u,&v) ;
    printf("%d et %d", u,v);
    //echange2 (&u,&v ) ;
}
