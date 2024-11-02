#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arq; // ponteiro para o arquivo
	char linha[256];
	
	arq = fopen("helloworld.txt", "r"); // abre o arquivo
	// verifica se leu o arquivo corretamente
	if(arq == NULL) {
		printf("Erro na leitura do arquivo.");
		return 1;
	}
	
	while(fgets(linha, sizeof(linha), arq)) {
		printf("%s", linha);
	}
	
	
	fclose(arq); // fecha o arquivo
	return 0;
}
