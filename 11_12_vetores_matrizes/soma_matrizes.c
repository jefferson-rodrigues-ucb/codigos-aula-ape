#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, j;
	int m1[3][3], m2[3][3];
	srand((unsigned)time(NULL)); //seed - altera a sequência gerada pelo gerador de números aleatórios
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			m1[i][j] = rand() % 10; // rand gera um valor aleatório até o valor de RAND_MAX
			m2[i][j] = rand() % 10; // 0 - 9
		}
	}
	printf("Matriz 1:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz 2:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSOMA:\n");
	printf("\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", m1[i][j] + m2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
