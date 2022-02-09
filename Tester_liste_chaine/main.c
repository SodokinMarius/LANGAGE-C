#include <stdio.h>
#include <stdlib.h>
typedef struct Element Element;
struct Element{
int nbr;
Element* suivant;
};

typedef struct Garder Liste;
struct Garder{
Element* tete;
};
Liste* initialiser(){
    Liste* valeur=malloc(sizeof(*valeur));
    Element* nbr=malloc(sizeof(*nbr));
    if(valeur=NULL || nbr==NULL){
        exit(valeur);
    }
    Element->nbr=0;
    Element->suivant=NULL;
    Garder->tete=valeur;


}


int main()
{
    printf("Hello world!\n");
    return 0;
}
