#ifndef OPERATION_CONVERTION_H_INCLUDED
#define OPERATION_CONVERTION_H_INCLUDED
typedef struct devise_affichage devise_affichage;
struct devise_affichage{
    char devise[3];

};
char recuperation_deuxiemeCaractere(char mot[3]);


float Convertion_Dollar(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira );

float Convertion_Euro(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira);

float Convertion_Francs(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira );

float Convertion_Dogecoins(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira);

float Convertion_Naira(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira);


#endif // OPERATION_CONVERTION_H_INCLUDED

