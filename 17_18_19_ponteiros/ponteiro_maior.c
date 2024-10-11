#include <stdio.h>
#define TAM 10

int maior(int *v) {
	int i;
	int m = *v;
	for(i = 1; i < TAM; i++) {
		if (m < *(v + i)) {
			m = *(v + i);
		}
	}
	return m;
}

int main() {
	int vet[TAM];
	int i;
	
	for(i = 0; i < TAM; i++) {
		printf("Digite o elemento %d: ", i);
		scanf("%d", (vet + i));
	}
	
	printf("Maior elemento: %d\n", maior(vet));
	return 0;
}
