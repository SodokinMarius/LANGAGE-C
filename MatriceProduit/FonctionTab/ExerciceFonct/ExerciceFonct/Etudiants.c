#include <stdio.h>
#include <stdlib.h>
typedef struct Personne Personne;
struct Personne{
	char nom[10];
	char prenom[15];
	int age;
	char sexe;	
};
void controler(){
	int i,n;
	do{
	printf("\nErreur ! Resaisir ! ");
	scanf("%d",&n)	;
	}while(n<=0);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr,i;
	printf("\nEntrer le nombre d etudiant :");
	scanf("%d",&nbr);
	Personne etudiant[nbr];
	
	for(i=0;i<nbr;i++){
		printf("\nEntrer le nom de l etudiant ");
		scanf("%s",&etudiant[i].nom);

	printf("\nEntrer son nom ");
		scanf("%s",&etudiant[i].prenom);
			printf("\nEntrer son age :");
		scanf("%d",&etudiant[i].age);
		controler();
	printf("\nEntrer son sexe:");
		scanf("%c",&etudiant[i].sexe);			
		}
		
	return 0;
}
