#include <stdio.h>

/* Função de Fibonacci recursiva */
int fibonacci(int n) {
	if (n <= 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	printf("%d --> %d\n", n, fibonacci(n));
	return 0;
}
