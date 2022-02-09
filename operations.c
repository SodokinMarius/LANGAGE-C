#include <stdio.h>
#include<stdlib.h>
#include "Fonctions_operatios.h"

void Saisie_matiere(int* n){
	int i;
	float note[*n];
	for(i=0;i<*n;i++){
		printf("\nVeuillez entrer la note de la matière %d : ",i+1);
	scanf("%f",&note[i]);
	}
	
}
 void controler(){
 	float n;
 	do{
 		printf("\nErreur ! Saisir une valeur strictement positive :");
 		scanf("%f",&n);
	 }while(n<=0);
 }
