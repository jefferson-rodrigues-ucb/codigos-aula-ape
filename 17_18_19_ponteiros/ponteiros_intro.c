#include <stdio.h>

/* 
Ponteiros são variáveis que armazenam endereços de outras 
variáveis
*/
int main() {
	int a, b;
	int *pa, *pb; // forma de declarar um ponteiro
	
	pa = &a; // atribuição
	pb = &b;
	
	scanf("%d %d", &a, &b);
	
	printf("%d (%p)\n%d (%p)\n", *pa, pa, *pb, pb);
	// para ler o valor do ponteiro, use o *
	
	return 0;
}
