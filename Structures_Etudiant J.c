
#include<stdio.h>
#include <stdlib.h>
#include "Struct_Save.h"

void Saisie_matiere(int* n){
	int i;
	float note[*n];
	for(i=0;i<*n;i++){
		printf("\nVeuillez entrer la note de la matière %d : ",i+1);
	scanf("%f",&note[i]);
	}
	
}
 void controler(int n){
 	
 	while(n<=0);{
 	
 		printf("\nErreur ! Saisir une valeur strictement positive :");
 		scanf("%d",&n);

 	
	 }
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int nbr,i,nbrmat;
	printf("\nVeuillez entrer e nombre d etudiant :");
	
	scanf("%d",&nbr);
	controler(nbr);
	printf("\nMerci beaucoup ! Maintenant, entrer le nombre de matiere enseigne :");
	scanf("%d",&nbrmat);
		controler(nbrmat);
	
	Personne etudiant[nbr];
	for(i=0;i<nbr;i++){
		printf("\nEtudiant numero %d : ",i+1);
		printf("\nSon nom : ");
		scanf("%s",&etudiant[i].nom);
		printf("\nSes prenoms : ");
		scanf("%s",&etudiant[i].prenoms);
			printf("\nSa date de naissance: ");
		scanf("%s",&etudiant[i].dateNaiss);
		printf("\nSon age : ");
		
		scanf("%d",&etudiant[i].age);
		
		Saisie_matiere(&nbrmat);
	}
	//affichage des valeurs
	for(i=0;i<nbr;i++){
		printf("\nEtudiant numero %d : ",i+1);
		printf("\nSon nom : %s",etudiant[i].nom);
		printf("\nSes prenoms : %s",etudiant[i].prenoms);
		
			printf("\nSa date de naissance:  %s",etudiant[i].dateNaiss);
		printf("\nSon age : %d",etudiant[i].age);
		
}
	
	return 0;
}
