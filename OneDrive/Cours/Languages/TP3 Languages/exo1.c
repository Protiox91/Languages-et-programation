#include <stdio.h>

int main (void){
    int a ;
    int *pa ;
    int **ppa ;
    a = 1 ;
    pa = &a ;
    ppa = &pa ;

    printf("%d \n",a);
    printf("%d \n",pa);
    printf("%d",**ppa);

    return (0) ;
}