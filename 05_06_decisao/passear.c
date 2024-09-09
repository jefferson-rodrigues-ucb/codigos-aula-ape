#include <stdio.h> // funções de entrada e saída de dados

int main() {
	int compromisso, cidade, dinheiro, chovendo, perto;
	printf("Questionario: Vou passear:\n1 - sim\n0 - nao\n");
	printf("Tenho compromisso no dia? ");
	scanf("%d", &compromisso);
	printf("Vou estar na cidade? ");
	scanf("%d", &cidade);
	printf("Tenho dinheiro? ");
	scanf("%d", &dinheiro);
	printf("Esta chovendo? ");
	scanf("%d", &chovendo);
	printf("Eh perto? ");
	scanf("%d", &perto);
	
	if (compromisso == 0 && cidade == 1 &&
			((dinheiro == 1 && chovendo == 0) || 
			(dinheiro == 0 && perto == 1))) {
		printf("Eu vou!");
	} else if (compromisso || !cidade || 
			(dinheiro && chovendo) ||
			(!dinheiro && !perto)) {
		printf("Nao vou!");
	} else {
		printf("Erro");
	}
	
	return 0;
}
