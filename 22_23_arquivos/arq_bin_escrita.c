#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 256

int main() {
	FILE *arq;
	char texto[TAM];
	long tam;
	arq = fopen("primeirobinario.dat", "wb");
	if(arq == NULL) {
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	printf("Digite o texto: ");
	fgets(texto, sizeof(texto), stdin);
	
	tam = fwrite(texto, sizeof(char), TAM, arq);
	
	printf("%ld elementos adicionados com sucesso!", tam);
	fclose(arq);
	return 0;
}
