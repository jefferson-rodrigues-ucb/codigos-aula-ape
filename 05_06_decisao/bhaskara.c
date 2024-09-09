#include <stdio.h> // funções de entrada e saída de dados
#include <math.h> // funções matemáticas

/* Crie um algoritmo em C que resolva uma equação de segunda grau utilizando Bhaskara. */

int main() {
	float a, b, c, delta, x1, x2;
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	if (a == 0) {
		printf("a nao pode ser zero.");
		return 1;
	}
	
	delta = b*b - 4*a*c;
	printf("Delta: %.2f\n", delta);
	
	if (delta > 0) {
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("x = {%.2f, %.2f}", x1, x2);
	} else if (delta == 0) {
		x1 = (-b)/(2*a);
		printf("x = {%.2f}", x1);
	} else {
		printf("Nao ha raizes reais.");
	}
	
	return 0;
}
