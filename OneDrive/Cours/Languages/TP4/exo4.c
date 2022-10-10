#include<stdio.h>
int main(){
    int I = 2;
    int J;
    unsigned char UC ='3';
    short S = 10;
    double D1 = -2.4;
    double D2 = 9.5;
    double res;


    res = UC/I*2+(I+D2)/S; // RES en double car calcul entre INT et doubles donc on transforme en double car plus grand,
    printf("res = %lf \n", res);

    J = (int)D1/I+(I+S+7)/D2+1;// Variable en entier
    printf("J = %d\n, ",J);

    UC = D1-1;
    printf("UC = %lf\n",UC); // Chaine de caractère

    J = UC = -84*I;
    printf("J = %d\n",J); // Chaine de caractère

    UC = J = -84*I;
    printf("UC = %c\n",UC);// entier

    printf("type UC = %lu, type res = %lu, type J = %lu, type D1 = %lu,type D2 = %lu ,type S = %lu ", sizeof(UC), sizeof(S),sizeof(res),sizeof(J),sizeof(D1),sizeof(D2));
    return 0;
}