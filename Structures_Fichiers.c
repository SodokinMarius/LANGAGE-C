#include <stdio.h>
#include <stdlib.h>
#include "Struct_Information_Personne.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct Informations_Personne utilisateur;
	printf("\nQuel est votre nom ? ");
	scanf("%s",utilisateur.nom);
	printf("\nQuel sont vos prenoms ? ");
	scanf("%s",utilisateur.prenoms);
	printf("\nQuel est votre Lieu de naissance ? ");
	scanf("%s",utilisateur.LieuNaiss);
	printf("\nQuel est votre sexe ? ");
	scanf("%d",utilisateur.age);
	
	return 0;
}
