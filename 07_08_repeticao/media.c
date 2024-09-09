#include <stdio.h> // funções de entrada e saída de dados

/*
Faça um programa que leia número reais maiores que zero.
Quando for entrado o número zero, o programa deverá apresentar
quantos números foram entrados e a média destes.
*/
int main() {
	float num, soma = 0;
	int contador = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%f", &num);
		soma = soma + num;
		contador++;
	} while (num != 0);
	
	printf("Total de valores digitados: %d\n", --contador);
	printf("Media = %.2f", soma / contador);
	
	return 0;
}
