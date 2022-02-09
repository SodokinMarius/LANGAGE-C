typedef struct Personne Personne;
struct Personne{
	char nom[10];

	char prenoms[15];
	int age;
char dateNaiss[10];	
float notes[];
};
void Note_moyenne(int nbrmat);
