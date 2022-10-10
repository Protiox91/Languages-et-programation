#include <stdio.h>
 
int main()
{
 
    for (int year=1971;year<2021;year++)
    {
        printf("Entrer l'année: ");
        scanf("%d", &year);  

        if (((year%4)==0) && ((year%100)==0) && ((year%400)==0)){
            printf("%d est une année bissextile", year);
        }

        if (((year%4)==0) && ((year%100)!=0)){
            printf("%d est une année bissextile", year);
        }

        if ((year%4)!=0){
                printf("%d n'est pas une année bissextile", year);
        } 

        if (((year%4)==0) && ((year%100)==0) && ((year%400)!=0)){
            printf("%d n'est pas une année bissextile", year);
        }
    }
}