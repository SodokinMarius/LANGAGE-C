#ifndef FONCTIONS_UTILES_H_INCLUDED
#define FONCTIONS_UTILES_H_INCLUDED

void Remplir_grille(int ligne,int col,char tab[ligne][col]);
void Afficher_grille(int ligne,int col,char tab[ligne][col]);

void Supprimer_case(int li, int colon,int ligne,int col,char tab[ligne][col]);
void Reorganiser_grille(int ligne,int col,char tab[ligne][col]);
void Echanger_case(char source[4],char dest[4],int ligne,int col, char tab[ligne][col]);
void Verification_suppression(int ligne,int col, char[ligne][col]);
int verifier_fin(int ligne, int col,char tab[ligne][col]);

#endif // FONCTIONS_UTILES_H_INCLUDED
