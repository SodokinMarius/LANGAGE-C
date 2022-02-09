#include <stdio.h>
#include <stdlib.h>
#include "Fonctions.h"

int main()
{
    int mat[3][3],i,j,dec=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);

    }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[i][j]);
            if(i!=j && mat[i][j]==0)
                dec=0;

            if(i==j && mat[i][j]!=0)
                dec+=1;

    }

    printf("\n");
    }
    printf("\n%d",dec);
    if(dec!=0)
        printf("\nLa matrice est diagonale");
    else
        printf("\nLa matrice est non diagonale.");

        printf("\nTransposee : \n");
        transposee(mat);

       /* if(verifier_Symetrique(mat)==1)*/
            printf("\nMatrice Symetrique\n ");
            if(verifier_Symetrique(mat)==1)
                printf("oui");
            else
                printf("Non");
    return 0;
}
