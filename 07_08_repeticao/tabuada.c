#include <stdio.h> // funções de entrada e saída de dados

/*
Apresente a tabuada da multiplicação.

Até o número 10.
*/
int main() {
	int i, j;
	
	for(i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
