#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED

typedef struct formulaire formulaire;
struct formulaire{
char nom[50],prenoms[60],date_naissance[15],Lieu_Naissance[15],sexe[15],nationalite[15],specialite[50];
    int age;
};
void controler(int n);
void controlerDate(char date[15]);

#endif // PROTOTYPES_H_INCLUDED
