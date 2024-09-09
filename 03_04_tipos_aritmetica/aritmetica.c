#include <stdio.h> // funções de entrada e saída de dados

int main() {
	int a = 10, b = 5, c = 3, d = 2, e, f;
	float g, h;
	e = a + b;
	printf("a + b = %d\n", e); // Adição
	f = a - c;
	printf("a - c = %d\n", f); // Subtração
	e = a * 7;
	printf("a * 7 = %d\n", e); // Multiplicação
	g = a / c;
	printf("a / c = %f\n", g); // Divisão com inteiros retorna inteiro
	printf("a / c = %f\n", (float)a / c); // Divisão
	f = a % c;
	printf("a mod c = %d\n", f); // Resto da divisão
	
	return 0;
}
