#include <stdio.h>
#include<math.h> 

#define G 10.0
float PointImpact(float v0, float a); 
 
int main()
{
 
    float V0; 
    float angle;  
    float ximp; 
 
    printf("Donner la valeur de la vitesse initiale : "); 
    scanf("%f", &V0);
    printf("Donner la valeur de l'angle alpha en degres :" );
    scanf("%f", &angle); 
 
    ximp = PointImpact(V0, angle);
    printf("Voici la valeur de l'abcisse du point d'impact : %f \n", ximp); 
 
}
 
float PointImpact(float v0, float a)
{
 
    float x;
    x =  ((v0 * v0) * sin(2*a*3.14/180.0))/G;
    return x;
}