#include <stdio.h> // funções de entrada e saída de dados
#include <stdlib.h> //fornece ferramentas para gerenciar memória, converter dados e executar operações relacionadas a processos
#include <locale.h> // Modifica a codificação do terminal, permitindo acentuação no terminal DOS

/*
Implemente uma calculadora.
Cada operação deve estar em uma função diferente.

Além das operações básicas, implemente a potência, utilize um `for` para realizar o cálculo.
*/

float soma(float a, float b) {
	return a + b;
}

float sub(float a, float b) {
	return a - b;
}

float mult(float a, float b) {
	return a * b;
}

float divi(float a, float b) {
	// Na divisão, divisor não pode ser zero
	if (b != 0) {
		return a + b;
	} else {
		printf("Divisor não pode ser zero.\n");
		exit(EXIT_FAILURE);
	}
	return 0.0;
}

float pot(float base, int expo) {
	int i, resposta = 1;
	for (i = 1; i <= expo; i++){
		resposta *= base; //resposta = resposta * base
	}
	return resposta;
}

int main() {
	float num1, num2, r;
	char oper;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a operação: ");
	scanf("%f %c %f", &num1, &oper, &num2);
	
	switch(oper) {
		case '+': r = soma(num1, num2); break;
		case '-': r = sub(num1, num2); break;
		case '*': r = mult(num1, num2); break;
		case '/': r = divi(num1, num2); break;
		case '^': r = pot(num1, num2); break;
	}
	printf("%.2f %c %.2f = %.2f\n", num1, oper, num2, r);
	exit(EXIT_SUCCESS);
}
