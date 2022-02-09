#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,lign1,lign2,col1,col2;
	float som;
	printf("\nVeuillez entrer la taille de la matrice 1");
	scanf("%d%d",&lign1,&col1);
	printf("\nVeuillez entrer la taille de la matrice 2");
	scanf("%d%d",&lign2,&col2);
	float mat1[lign1][col1];
	float mat2[lign2][col2];
	if(col1!=lign2)
	printf("\nLe produit ne peut pas aboutir :");
	else{
		printf("\nMatrice 1");
		for(i=0;i<lign1;i++){

			for(j=0;j<col1;j++){
				printf("\nElement d'indice : %d%d :",i+1,j+1);
				scanf("%f",&mat1[i][j]);
			}
		}
		printf("\nMatrice 2");
		for(i=0;i<lign2;i++){

			for(j=0;j<col2;j++){
				printf("\nElement d'indice : %d%d :",i+1,j+1);
				scanf("%f",&mat2[i][j]);
			}
		}

		float prod[lign1][col2];
			for(i=0;i<lign1;i++){
				som=0;
			for(j=0;j<col2;j++){
				som+=mat1[i][j]*mat2[j][i];
				som+=mat1[i][j+1]*mat2[i+1][j];
				prod[i][j]=som;
				}
			}

			for(i=0;i<lign1;i++){
			for(j=0;j<col2;j++){

				printf("%.2f\t",prod[i][j]);
				}
				printf("\n");
			}
	}


		return 0;
}
