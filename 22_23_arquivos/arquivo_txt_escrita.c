#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arq;
	char texto[256];
	
	arq = fopen("arquivo.txt", "w");				// 1. abertura do arquivo w (write) a(append)
	if (arq == NULL) {								// 2. verificar se foi aberto
		printf("Erro na abertura do arquivo");
		return 1;
	}
	printf("Digite o texto: ");
	fgets(texto, sizeof(texto), stdin);
	
	fprintf(arq, "%s", texto);						// escrever no arquivo
	
	fclose(arq);									// �ltimo, fechar o arquivo
	return 0;
}
