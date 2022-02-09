#include <stdio.h>
#include<stdlib.h>


void transposee(int tab[3][3]){
    int i,j,tab2[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            tab2[j][i]=tab[i][j];

        }
        printf("\n");


    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",tab2[i][j]);

        }
        printf("\n");


    }
}

int verifier_Symetrique(int tab[3][3]){
    int i,j, verifi;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           if(tab[i][j]==transposee(tab[i][j]))
           /* if(tab[i][j]==tab[j][i])*/
                verifi=1;
            else
                verifi=0;
               // printf("%d\t",tab[i][j]);
        }
        // printf("\n");
    }

   // return verifi;

    }

