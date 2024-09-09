#include <stdio.h> // funções de entrada e saída de dados

/*
Implemente o cálculo do fatorial usando for
n! = n(n-1)(n-2)...2.1
5! = 5.4.3.2.1 = 120
*/
int main() {
	int i, n, fat = 1;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		fat = fat * i;
		printf("%d! = %d\n", i, fat);
	}
	
	printf("\nFatorial de %d: %d", n, fat);
	return 0;
}
