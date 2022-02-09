#include <stdio.h>
#include <stdlib.h>
#include "Operation_convertion.h"

/*Etant donnee que casValeur(switch) ne prend que les caracteres ou entiers, cette fonction vise a
recuperer le deuxieme caractere du choix de devise d'affichage de chaque client. Ceci pour l'utiliser
pour chacun des cas */
char recuperation_deuxiemeCaractere(char mot[3]){
char caractere;
int i=0;

while(mot[i]!='\0'){
    caractere=mot[1];
i++;
}
return caractere;
}



//Voici la fonction qui convetit et affiche toutes les quantités de devises en dollar(USD)
float Convertion_Dollar(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira ){
    float montanttot;
    montanttot=qtdollar+(qteuro*1.2)+(qtfranc*0.0018)+(qtdogecoin*0.6)+(qtnaira*0.0025);
    return montanttot;


}

//Voici la fonction qui convetit et affiche toutes les quantités de devises en Euro(EUR)

 float Convertion_Euro(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira ){
    float montanttot;
montanttot=(qtdollar*0.8)+(qteuro)+(qtfranc*0.0015)+(qtdogecoin*0.5)+(qtnaira*0.002);
    return montanttot;
}

//Voici la fonction qui convetit et affiche toutes les quantités de devises en francs(XOF)

float Convertion_Francs(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira ){
    float montanttot;
     montanttot=(qtdollar*540)+(qteuro*650)+(qtfranc)+(qtdogecoin*320)+(qtnaira*1.3);
    return montanttot;
}

//Voici la fonction qui convetit et affiche toutes les quantités de devises en Dogecoins(XDG)

float Convertion_Dogecoins(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira ){
    float montanttot;
   montanttot=(qtdollar*1.67)+(qteuro*2)+(qtfranc*0.003)+(qtdogecoin)+(qtnaira*0.004);
    return montanttot;

}

//Voici la fonction qui convetit et affiche toutes les quantités de devises en Naira(NGN)

float Convertion_Naira(float qtdollar,float qteuro,float qtfranc,float qtdogecoin,float qtnaira){
    float montanttot;
     montanttot=(qtdollar*410)+(qteuro*490)+(qtfranc*0.75)+(qtdogecoin*245)+(qtnaira);
    return montanttot;

}

