#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 256

int main() {
	FILE *arq;
	char texto[TAM];
	arq = fopen("primeirobinario.dat", "rb");
	if(arq == NULL) {
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	
	fread(texto, sizeof(char), TAM, arq);
	
	printf("%s", texto);
	fclose(arq);
	return 0;
}
