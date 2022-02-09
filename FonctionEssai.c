#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float ecrire(char* message){
	float valeur;
	printf(message);
	scanf("%f",&valeur);
	while(valeur<=0){
		printf("\Erreur de message ! reessayez :");
		scanf("%.2f",&valeur);
		return valeur;
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r;
	r=ecrire("Veuillez entrer le rayon ");
	char nom,prenom;
	printf("\nVeuillez entrer votre nom : ");
	scanf("%[\n]%*c",nom);

	printf("\nVeuillez entrer votre prenom : ");
	scanf("%s",prenom);
	fgets(prenom,sizeof(prenom),stdin);
	
	
	
	printf("%s %c",prenom,nom);
		return 0;
		
}
