#include <stdio.h>
#include <stdlib.h>
#include "Enregistrement_Etudiant.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr,i;
	Individu etudiant;
	printtf("\nVeuillez entrer le nombre d etudiant : ");
	scanf("%d",&nbr);

	for(i=0;i<nbr;i++){
		printf("\nEtudiant num %d : ",i+1);
		printf("\nenter le nom : ");
		scanf("%s",&etudiant.nom);
		printf("\nenter le prenom : ");
		scanf("%s",&etudiant.prenoms);
		printf("\nenter le Date de naissance : ");
		scanf("%s",&etudiant.dateNais);
		printf("\nenter le Lieu de naissance : ");
		scanf("%s",&etudiant.lieuNaiss);
		printf("\nenter le age: ");
		scanf("%d",&etudiant.age);
		printf("\nenter le sexe : ");
		scanf("%c",&etudiant.sexe);
		printf("\nenter le nombre de matiere enseigne : ");
		scanf("%d",&etudiant.nbremat);
		
	}
	return ;
}
