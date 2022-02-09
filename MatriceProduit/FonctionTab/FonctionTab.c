#include <stdio.h>
#include <stdlib.h>
void Remplir(float tab[3][2]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("\nEnter l element %d %d :",i+1,j+1);
			scanf("%f",&tab[i][j]);
					}
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,col;
	printtf("\nEntrer le nombre de ligne et le nombre de colonne :");
	scanf("%d%d",&n,&col);
	float tab[n][col];
	Remplir(tab);
		return 0;
}
