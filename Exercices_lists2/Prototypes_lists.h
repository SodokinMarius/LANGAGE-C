#ifndef PROTOTYPES_LISTS_H_INCLUDED
#define PROTOTYPES_LISTS_H_INCLUDED
void* object;
typedef struct Element* Pelement;
typedef struct Element Element;
struct Element{
    int note;
Pelement next;

};

void creerliste(Pelement tete);
void Afficher_liste(Pelement tete);
void Ajouter_liste(Pelement tete, int n);


#endif // PROTOTYPES_LISTS_H_INCLUDED
