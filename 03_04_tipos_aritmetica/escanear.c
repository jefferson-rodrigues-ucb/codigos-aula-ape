#include<stdio.h>

int main() {
	int a; // inteiro
	char nome[20]; // string* -> string não é tipo primitivo do C
	float salario; // real: ponto flutuante
	
	scanf("%d", &a); // scanf precisa do &, &a é o endereço de a na memória
	scanf("%s", nome); // string é uma exceção, na variável há o endereço do começo da cadeia
	scanf("%f", &salario); // scanf de ponto flutuante
	
	printf("a: %d\nnome: %s\nsalario: %.2f", a, nome, salario);
	
	return 0;
}
