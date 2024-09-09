#include <stdio.h> // funções de entrada e saída de dados

int main() {
	int i;
	
	i = 0;
	
	// while verifica primeiro, depois executa
	while (i < 10) {
		printf("while: %d\n", i);
		i++;
	}
	
	// do executa, depois verifica
	do {
		printf("do: %d\n", i);
		i++;
	} while (i < 10);
	
	return 0;
}
