#include <stdio.h>

/* Faça um programa que apresente a sequência de Fibonacci até uma posição apresentada pelo usuário. */
int main() {
	int i, p;
	int atual = 1, anterior = 0, antanterior;
	
	printf("Digite p: ");
	scanf("%d", &p);
	printf("1 --> %d\n", atual);
	
	for (i = 2; i <= p; i++) {
		antanterior = anterior;
		anterior = atual;
		atual = anterior + antanterior;
		printf("%d --> %d\n", i, atual);
	}
	
	return 0;
}
