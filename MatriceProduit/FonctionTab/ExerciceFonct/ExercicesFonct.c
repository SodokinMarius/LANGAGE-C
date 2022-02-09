#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lig,col;
	printf("\nEntrer le nombre colonne et de ligne : ");
	scanf("%d%d",&lig,&col);
	int tab[lig][col];	
	remplir(tab)
	return 0;
}
