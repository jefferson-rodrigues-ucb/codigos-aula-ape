#include <stdio.h> // funções de entrada e saída de dados

int main() {
	int NF;
	printf("Digite a nota final: ");
	scanf("%d", &NF);
	
	if (NF >= 7) {
		printf("Aprovado.\n");
	} else if (NF > 4) {
		printf("Recuperacao.\n");
	} else {
		printf("Reprovado.\n");
	}
	
	return 0;
}
