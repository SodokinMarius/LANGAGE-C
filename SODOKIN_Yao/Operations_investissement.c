#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Informations_investissement.h"

void Operations_sur_investissement(int nbr){

    char nom[nbr][49],nom1[49],nom2[49],nom3[49],nom4[49];
    double min[nbr],max[nbr],valeurmin[nbr],valeurmax[nbr],valeurmax1,valeurmax2,valeurmin3,valeurmin4;
    int i;


    for(i=0;i<nbr;i++){

              scanf("%s%lf%lf",&nom[i],&min[i],&max[i]);



            valeurmin[i]=pow((1+(min[i]/100)),10);
            valeurmax[i]=pow((1+(max[i]/100)),10);
    }

    //Initialisation respectif des noms des entreprise plus performent, moins performaent, moins risqué et plus risqué

            valeurmax1=valeurmax[0];
            valeurmax2=valeurmax[0];
            valeurmin3=valeurmin[0];
            valeurmin4=valeurmin[0];
            strcpy(nom1,nom[0]);
            strcpy(nom2,nom[0]);
            strcpy(nom3,nom[0]);
            strcpy(nom4,nom[0]);

            // Recuperation respectif des noms des entreprise plus performent, moins performaent, moins risqué et plus risqué

for(i=0;i<nbr;i++){

      if(valeurmax[i]>valeurmax1){
                valeurmax1=valeurmax[i];
                strcpy(nom1,nom[i]);
            }

            if(valeurmax[i]<valeurmax2){
                valeurmax2=valeurmax[i];
                strcpy(nom2,nom[i]);

            }
            if(valeurmin[i]<valeurmin3){
                valeurmin3=valeurmin[i];
                strcpy(nom3,nom[i]);
            }
            if(valeurmin[i]>valeurmin4){
                valeurmin4=valeurmin[i];
                strcpy(nom4,nom[i]);
            }
}

//Affichage des noms,valeur minimale et valeur maximale de chaque valeur maximale
            for(i=0;i<nbr;i++){
                printf("\nDans 10 ans, %s vaudra entre %.14lf et %.14lf fois sa valeur actuelle.",nom[i],valeurmin[i],valeurmax[i]);
            }

// Affichage respectif des noms des entreprise plus performent, moins performaent, moins risqué et plus risqué

            printf("\n\nInvestissement le plus performant : %s (%.14lf x )",nom1,valeurmax1);
            printf("\nInvestissement le moins performant : %s (%.14lf x )",nom2,valeurmax2);
            printf("\nInvestissement le plus risque : %s (%.14lf x )",nom3,valeurmin3);
            printf("\nInvestissement le moins risque : %s (%.14lf x )",nom4,valeurmin4);
}











