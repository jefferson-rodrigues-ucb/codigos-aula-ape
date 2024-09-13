#include <stdio.h>

int main() {
	int i;
	int v[5];
	for(i = 0; i < 5; i++) {
		printf("Digite o valor de %d: ", i);
		scanf("%d", &v[i]); // leitura com scanf
	}
	printf("\n\nVetor: ");
	for(i = 0; i < 5; i++) {
		printf("%d ", v[i]);
	}
	
	
	return 0;
}
