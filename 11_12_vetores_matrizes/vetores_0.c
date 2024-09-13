#include <stdio.h>

int main() {
	int i;
	int v1[] = {1,2,3,4,5}; // vetor de 5 inteiros já iniciado, índices entre 0 e 4
	int v2[5]; // vetor de 5 inteiros, índices entre 0 e 4
	
	printf("\n\nVetor 1: ");
	for(i = 0; i < 5; i++) {
		printf("%d ", v1[i]);
		v2[i] = v1[i] + 5; // atribuição
	}
	printf("\n\nVetor 2: ");
	for(i = 0; i < 5; i++) {
		printf("%d ", v2[i]); // leitura
	}
	return 0;	
}
