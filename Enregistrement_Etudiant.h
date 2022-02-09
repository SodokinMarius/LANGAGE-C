#include<stdio.h>
#include<stdlib.h>
typedef struct Individu  Individu;
struct Individu{
	char nom[15],prenoms[20];
	char dateNais[10], lieuNaiss[15];
	char sexe[2];
	int age;
	int nbremat;
	
	int moyenne;	
};
