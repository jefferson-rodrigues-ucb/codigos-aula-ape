#include <stdio.h> // funções de entrada e saída de dados

/*
Implemente o cálculo do fatorial
n! = n(n-1)(n-2)...2.1
5! = 5.4.3.2.1 = 120
*/
int main() {
	int n, fat = 1;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	while(n > 1) {
		fat *= n; // fat = fat * n
		n--;
	}
	
	printf("fatorial: %d\n", fat);
	return 0;
}
