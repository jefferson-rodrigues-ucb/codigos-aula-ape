#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main() {
	float a, b, r;
	char oper;
	
	printf("Digite a operacao: ");
	scanf("%f %c %f", &a, &oper, &b);
	
	switch(oper) {
		case '+': r = soma(a, b);break;
		case '-': r = subt(a, b);break;
		case '*': r = mult(a, b);break;
		case '/': r = divi(a, b);break;
		case '^': r = pot(a, b);break;
		default: printf("Operacao invalida.");
	}
	printf("%.2f %c %.2f = %.2f\n", a, oper, b, r);
	exit(EXIT_SUCCESS);
}