#include <stdio.h>
#include <stdlib.h>

void saisie_donne(int n){
    etudiant donne;
    for(i=0;i<n;i++){
        printf("\nVeuillez entrer le nom de l 'etudiant: ");
    scanf("%s",&donne[i].nom);
    printf("\nVeuillez entrer son prenom: ");
    scanf("%s",&donne[i].prenom);
    printf("\nVeuillez entrer : ");
    scanf("%d",&donne[i].annee_naissance);
    printf("\nVeuillez entrer  ses notes : ");
    scanf("%f%f%f",&donne[i].note[0],&donne[i].note[1],&donne[i].note[2]);

    }


}
