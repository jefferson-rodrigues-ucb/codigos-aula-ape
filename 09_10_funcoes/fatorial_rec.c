#include <stdio.h>

/* Fatorial usando função recursiva */
int fatorial(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * fatorial(n - 1);
}

int main() {
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	printf("%d! = %d\n", n, fatorial(n));
	return 0;
}
