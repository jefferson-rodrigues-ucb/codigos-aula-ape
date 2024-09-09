#include<stdio.h>

// Quando uma função é void, ela não tem retorno
void ola() {
	printf("Hello World!\n");
}

// As funções tem apenas um tipo de retorno
int quadrado(int a) {
	return mult(a, a); // Uma função pode chamar outra ou ela mesma
}

// Uma função pode não ter nenhum ou vários argumentos.
// Todas as variáveis devem estar acompanhadas de seus tipos.
// São variáveis locais, existindo apenas durante o funcionamento da função.
int mult(int a, int b) {
	return a * b;
}

int main() {
	int n = 10;
	ola();
	ola();
	printf("o quadrado de %d = %d\n", n, quadrado(n));

	return 0;
}
