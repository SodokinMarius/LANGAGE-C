#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "convertion.h"

void convertion (int n)
{

    char nom[n][49],nom1[49],nom2[49],nom3[49],nom4[49];
    double min[n],max[n],valpti[n],valgrd[n],valgrd1,valgrd2,valpti3,valpti4;
    int i;


    for(i=0;i<n;i++){

              scanf("%s%lf%lf",&nom[i],&min[i],&max[i]);



            valpti[i]=pow((1+(min[i]/100)),10);
            valgrd[i]=pow((1+(max[i]/100)),10);
    }



            valgrd1=valgrd[0];
            valgrd2=valgrd[0];
            valpti3=valpti[0];
            valpti4=valpti[0];
            strcpy(nom1,nom[0]);
            strcpy(nom2,nom[0]);
            strcpy(nom3,nom[0]);
            strcpy(nom4,nom[0]);



for(i=0;i<n;i++){

      if(valgrd[i]>valgrd1){
                valgrd1=valgrd[i];
                strcpy(nom1,nom[i]);
            }

            if(valgrd[i]<valgrd2){
                valgrd2=valgrd[i];
                strcpy(nom2,nom[i]);

            }
            if(valpti[i]<valpti3){
                valpti3=valpti[i];
                strcpy(nom3,nom[i]);
            }
            if(valpti[i]>valpti4){
                valpti4=valpti[i];
                strcpy(nom4,nom[i]);
            }
}


            for(i=0;i<n;i++){
                printf("\nDans 10 ans, %s vaudra entre %.14lf et %.14lf fois sa valeur actuelle.",nom[i],valpti[i],valgrd[i]);
            }

            printf("\n\nInvestissement le plus performant : %s (%.14lf x )",nom1,valgrd1);
            printf("\nInvestissement le moins performant : %s (%.14lf x )",nom2,valgrd2);
            printf("\nInvestissement le plus risque : %s (%.14lf x )",nom3,valpti3);
            printf("\nInvestissement le moins risque : %s (%.14lf x )",nom4,valpti4);
}











