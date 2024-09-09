#include <stdio.h> // funções de entrada e saída de dados
#include <stdlib.h> //fornece ferramentas para gerenciar memória, converter dados e executar operações relacionadas a processos
#include "calculadora.h"

float soma(float a, float b) {
	return a + b;
}
float subt(float a, float b) {
	return a - b;
}
float mult(float a, float b) {
	return a * b;
}
float divi(float a, float b) {
	if (b == 0) {
		printf("Valor do divisor nao pode ser zero.");
		exit(EXIT_FAILURE);
	}
	return a / b;
}
float pot(float base, int expo) {
	int i, p = 1;
	for (i = 1; i <= expo; i++) {
		p *= base; //p = p * base
	}
	return p;
}