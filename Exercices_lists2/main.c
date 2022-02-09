#include <stdio.h>
#include <stdlib.h>
#include "Prototypes_lists.h"
int main()
{
    Pelement tete=NULL;
    int val;
    tete=malloc(sizeof(Pelement));


  creerliste(tete);
    Afficher_liste(tete);

   /*printf("\nVeillez entrer la valeur suivante a ajouter :");
    scanf("%d",&val);*/

    Ajouter_liste(tete,val);
    Afficher_liste(tete);

    return 0;
}
