#include <stdio.h>

int main ( ){
    int A = 1 ;
    int B = 2 ;
    int C = 3 ;
    int *P1 , *P2 ;

    P1=&A;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    P2=&C;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    *P1=(*P2)++;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    P1=P2 ;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    P2=&B;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    *P1-=*P2 ;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    ++*P2 ;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    *P1*=*P2 ;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    A=++*P2**P1 ;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    P1=&A;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    *P2=*P1/=*P2 ;
    printf("%d,%d,%d,%d,%d \n",A,B,C,P1,P2);

    return 0 ;
}
