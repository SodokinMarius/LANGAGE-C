#include <stdio.h>
#include <stdlib.h>
#include "save.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr,i;
	struct Personne etudiant;
	printf("\nEntrer au clavier le nombre d etudiant :");
	printf("%d",&nbr);
	 for(i=0;i<nbr;i++){
	 	print("\nEtudiant num ",i+1);
	 	printf("\nLe nom :");
	 	scanf("%s",&etudiant.nom);
		printf("\nLe prenom :");
	 	scanf("%s",&etudiant.prenom);
		 	printf("\nL age :");
	 	scanf("%d",&etudiant.age);	
		 	printf("\nLa moyenne :");
	 	scanf("%f",&etudiant.moyenne);	 
		 } 
	return 0;
}
