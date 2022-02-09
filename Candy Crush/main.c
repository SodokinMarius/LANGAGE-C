i#include <stdio.h>
#include <stdlib.h>
#include "Operation.h"

int main()
{
int carac_grille[8][10],lig,col;

remplir(carac_grille[8][10]);
/*printf("\n");
afficher_mise_a_jour(carac_grille[8][10]);
vider(carac_grille[8][10]);*/

printf("\nChoisir une case :");
scanf("%d%d",&lig,&col);

//remplir_val(carac_grille[8][10],lig,col);

    return 0;
}
