#include <stdio.h>
#include <stdlib.h>
#include "Fonctions_utiles.h"
#define ligne 10
#define col 10

int main()
{
      int sortir=0;

     char tab[ligne][col],source[4],dest[4];

     Remplir_grille(ligne,col,tab);
     Afficher_grille(ligne,col,tab);


     printf("\nVeuillez entrer les cases a Echanger (Ex : A1 B2) : ");
     scanf("%s %s",&source,&dest);



     Echanger_case(source,dest,ligne,col,tab);

    // Afficher_grille(ligne,col,tab);
    Verification_suppression(ligne,col,tab);
    // Afficher_grille(ligne,col,tab);
    Reorganiser_grille(ligne,col,tab);
    Afficher_grille(ligne,col,tab);
    sortir= verifier_fin(ligne,col,tab);

    return 0;
}
