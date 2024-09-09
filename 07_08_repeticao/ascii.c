#include <stdio.h> // funções de entrada e saída de dados

int main() {
	int i;
	
	printf("Tabela extendida: ");
	
	for (i = 0; i < 256; i++) {
		printf("%d --> %c\n", i, i);
	}
	
	return 0;
}
