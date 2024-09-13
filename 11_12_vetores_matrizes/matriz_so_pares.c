#include<stdio.h>

/* Leia uma matriz e exibir os valores pares e suas posições*/
int main() {
	int i, j;
	int mat[3][3];
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Digite o valor de (%d, %d): ",
					i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\nA pares:\n\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (mat[i][j] % 2 == 0){
				printf("(%d,%d) %d\n", i+1, j+1, mat[i][j]);
			}
		}
	}
	return 0;
}
