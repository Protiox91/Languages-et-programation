#include <stdio.h>
#define N 3

// Fonction saisie
void saisieMatrice(int M1[N][N])
{
    int i,j;

    for(i=0; i<N; i++) {
        printf("Ligne %d entrer %d valeurs \n",i+1,N);
        for(j=0; j<N; j++) {
            scanf("%d",&M1[i][j]);
        }
    }
}

//Fonction opposée
void opposeeMatrice(int M1[N][N])
{
    int M3[N][N];
    int i,j;
    printf("Opposée de la matrice \n");
    // A completer
    for(i = 0; i < N; i++){
        for(j=0; j < N; j++)
        {
            M3[i][j] = M1[i][j] * (-1) ;
            printf("%d", M3[i][j]);
        }
        printf("\n");
    }
}

//Fonction somme
void sommeMatrices(int M1[N][N], int M2[N][N])
{
    int M3[N][N];
    int i,j;
    printf("Addition des matrices \n");

    for(i = 0; i < N; i++){
        for(j=0; j < N; j++)
        {
            M3[i][j] = M1[i][j] + M2[i][j];
            printf("%d \t", M3[i][j]);
        }
        printf("\n");
    }
}

//Fonction produit
void produitMatrices(int M1[N][N], int M2[N][N])
{
    int M3[N][N];
    int i,j,k;
    printf("Multiplication des matrices \n");

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            M3[i][j]=0;
            for(k = 0; k < N; k++){
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    for(i = 0; i < N; i++){
        for(j=0; j < N; j++)
        {
            printf("%d \t", M3[i][j]);
        }
        printf("\n");
    }
}

// BONUS : trouver la valeur maximale dans la matrice et ainsi que ces idices dans celle-ci
void valMAX(int M1[N][N]){
    int i,j;
    int max = 0;
    int mindi, mindj ;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if (max < M1[i][j]){
                max = M1[i][j];
                mindi = i ;
                mindj = j ;
            }
        }
    } 
    printf("La valeur maxiale du tableau est : %d et se trouve aux indices : [%d][%d]\n", max, mindi, mindj);
}


void main()
{
    int A[N][N];
    int B[N][N];

    // Question 1 : Saisie
    printf("Saisie des coefficients de la matrice A : \n");
    saisieMatrice(A);

    // Ajout du BONUS 
    valMAX(A);

    // Question 2 : opposée
    opposeeMatrice(A);

    // Question 3 : addition
    printf("Saisie des coefficients de la matrice B : \n");
    saisieMatrice(B);
    sommeMatrices(A,B);

    // Question 4 : multiplication
    produitMatrices(A,B);

}