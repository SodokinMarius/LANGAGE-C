#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void help()
{
    printf("\nMerci de faire du jeux Morpion votre jeux preferer. \n Voici un peu les detais sur le jeux.\n");
    printf("C est un jeux quia se qui se joue d une part entre deux jeurs et d autre part entre un seul jour et lordinateur.");
    printf("\nPour jouer, il faut entrer les coordonnes de la case, c est a dire le numero de la ligne et celui de la collonne");
    printf("\nnumero de lign = numero-1 et numero de colonne=numero-1");
    printf("\nVous venez de jouer dans la case choisi; c est maintenant le tour de votre partenaire(exactement la meme chose)");
    printf("\nLe signe de l un est represente par x et pour le second par o");
    printf("\nSi quelqu un arrive a jouer dans trois cases successsifs, alors il est gagnant.");
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define s1 'x'
#define s2 'u'

int main(int argc, char *argv[])
{

    char dec,nomjoueur[10];
    int i,j,li,col,dim1=0,dim2=0,dim,val1=0,val2=0,ord,jou;
    int max=3,min=1,linmystere,colmystere;
    srand(time(NULL));

    char table[3][3],choix,joueur1[10],joueur2[10];

    do
    {

        printf("\n----BIENVENUE DANS L INTERFACE MORPION -----\n");
        printf("\n\t+++==+ MENU DU JEU ++====++\n");
        printf("\nj===> Jouer entre deux joueurs\ns===> Jouer avec l ordinateur:\n");
        printf("\ng===> Afficher le guide du jeux\nVeuillez faire votre choix : ");

        scanf("%s",&choix);


        for(i=0; i<3; i++)
        {

            for(j=0; j<3; j++)
            {

                table[i][j]=' ';
            }

        }
        switch(choix)
        {
        case 'j':
            printf("\nVeuillez fournir les noms des joueurs :\nJOUEUR 1 :");
            scanf("%s",&joueur1);
            printf("\nJOUEUR 2 :");
            scanf("%s",&joueur2);

            do
            {

                do
                {
                    printf("\n %s: Entrer les coordonnees de la case  :",joueur1);
                    scanf("%d%d",&li,&col);
                    if(table[li-1][col-1]!=' ')
                        printf("\nCette case est deja occupee,jouez ailleur :");
                }
                while(table[li-1][col-1]!=' ');

                dim1+=1;
                table[li-1][col-1]=s1;
                printf("________________\n");
                for(i=0; i<3; i++)
                {

                    for(j=0; j<3; j++)
                    {

                        printf("|%c___",table[i][j]);
                    }

                    printf("|\n");

                }


                do
                {
                    printf("\n%s , Entrer les coordonnees de la case :",joueur2);
                    scanf("%d%d",&li,&col);
                    if(table[li-1][col-1]!=' ')
                        printf("\nCette case est deja occupee,jouez ailleur :");
                }
                while(table[li-1][col-1]!=' ');

                table[li-1][col-1]=s2;
                dim2+=1;
                printf("________________\n");
                for(i=0; i<3; i++)
                {

                    for(j=0; j<3; j++)
                    {


                        printf("|%c___",table[i][j]);

                    }

                    printf("|\n");
                }


                if((table[0][0]==s1 && table[0][1]==s1 && table[0][2]==s1)||
                        (table[0][0]==s1 && table[1][1]==s1 && table[2][2]==s1)||
                        (table[0][0]==s1 && table[1][0]==s1 && table[2][0]==s1)||
                        (table[0][2]==s1 && table[1][2]==s1 && table[2][2]==s1)||
                        (table[2][0]==s1 && table[2][1]==s1 && table[2][2]==s1)||
                        (table[0][2]==s1 && table[1][1]==s1 && table[2][0]==s1)||
                        (table[1][0]==s1 && table[1][1]==s1 && table[1][2]==s1)||
                        (table[2][0]==s1 && table[2][1]==s1 && table[2][2]==s1))
                {

                    val1+=1;
                }

                else if((table[0][0]==s2 && table[0][1]==s2 && table[0][2]==s2)||
                        (table[0][0]==s2 && table[1][1]==s2 && table[2][2]==s2)||
                        (table[0][0]==s2 && table[1][0]==s2 && table[2][0]==s2)||
                        (table[0][2]==s2 && table[1][2]==s2 && table[2][2]==s2)||
                        (table[2][0]==s2 && table[2][1]==s2 && table[2][2]==s2)||
                        (table[0][2]==s2 && table[1][1]==s2 && table[2][0]==s2)||
                        (table[1][0]==s2 && table[1][1]==s2 && table[1][2]==s2)||
                        (table[2][0]==s2 && table[2][1]==s2 && table[2][2]==s2))
                {

                    val2+=1;
                }

            }
            while( dim1<=4 && dim2<=4 && val1==0 && val2==0);
            if(val1!=0 && val1!=val2)
                printf("\n%s a Gagne le jeux ! Felicitation a vous ",joueur1);
            if(val2!=0 && val1!=val2)
                printf("\n%s a Gagne le jeux ! Felicitation a vous ",joueur2);
            if((val1==0 && val2==0) ||(val1==val2))
                printf("\nJeux nul ! Personne n a gagne !")	;

            printf("\n");
            break;

        case 's':
            srand(time(NULL));
            printf("\nVeuillez entrer votre nom :");
            scanf("%s",&nomjoueur);
            ord=0,jou=0;



            do
            {

                linmystere=(rand()%(max-min)+1);

                colmystere=(rand()%(max-min)+1);


                printf("\n(%d,%d)",linmystere,colmystere);
                table[linmystere-1][colmystere-1]=s1;
                dim1+=1;
                printf("\n________________\n");
                for(i=0; i<3; i++)
                {

                    for(j=0; j<3; j++)
                    {

                        printf("|%c___",table[i][j]);
                    }

                    printf("|\n");

                }


                do
                {
                    printf("\n%s , Entrer les coordonnees de la case :",nomjoueur);
                    scanf("%d%d",&li,&col);
                    if(table[li-1][col-1]!=' ')
                        printf("\nCette case est deja occupee,jouez ailleur :");
                }
                while(table[li-1][col-1]!=' ');

                table[li-1][col-1]=s2;
                dim2+=1;
                printf("\n_______________\n");
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        printf("|%c___",table[i][j]);
                    }
                    printf("|\n");
                }

                if((table[0][0]==s1 && table[0][1]==s1 && table[0][2]==s1)||
                        (table[0][0]==s1 && table[1][1]==s1 && table[2][2]==s1)||
                        (table[0][0]==s1 && table[1][0]==s1 && table[2][0]==s1)||
                        (table[0][2]==s1 && table[1][2]==s1 && table[2][2]==s1)||
                        (table[2][0]==s1 && table[2][1]==s1 && table[2][2]==s1)||
                        (table[0][2]==s1 && table[1][1]==s1 && table[2][0]==s1)||
                        (table[1][0]==s1 && table[1][1]==s1 && table[1][2]==s1)||
                        (table[2][0]==s1 && table[2][1]==s1 && table[2][2]==s1))
                {

                    ord+=1;
                }

                else if((table[0][0]==s2 && table[0][1]==s2 && table[0][2]==s2)||
                        (table[0][0]==s2 && table[1][1]==s2 && table[2][2]==s2)||
                        (table[0][0]==s2 && table[1][0]==s2 && table[2][0]==s2)||
                        (table[0][2]==s2 && table[1][2]==s2 && table[2][2]==s2)||
                        (table[2][0]==s2 && table[2][1]==s2 && table[2][2]==s2)||
                        (table[0][2]==s2 && table[1][1]==s2 && table[2][0]==s2)||
                        (table[1][0]==s2 && table[1][1]==s2 && table[1][2]==s2)||
                        (table[2][0]==s2 && table[2][1]==s2 && table[2][2]==s2))
                {

                    jou+=1;
                }

            }
            while( dim1<=3 && dim2<=3 && ord==0 && jou==0);
            if(ord!=0 && ord!=jou)
                printf("\nDesole Mr %s, vous avez perdu ",nomjoueur);
            if(jou!=0 && ord!=jou)
                printf("\nMr %s,vous avez Gagne le jeux ! Felicitation a vous ",nomjoueur);
            if((ord==0 && jou==0) ||(ord==jou))
                printf("\nJeux nul ! Personne n a gagne !")	;

            printf("\n");

            break;
        case 'g':
            help();

            break;
        default:
            printf("\nVotre choix est invalide! Reesayez plus tard");
        }

        printf("\nVoulez vous reprendre le jeux ?(o/n)");
        scanf("%s",&dec);
    }
    while(dec=='o');

    return 0;
}
