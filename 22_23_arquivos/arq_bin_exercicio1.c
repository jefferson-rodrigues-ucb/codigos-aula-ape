#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *arqn, *arqb;
	char texto[256];
	int qnt;
	
	arqn = fopen("dados.txt", "w");
	if (arqn == NULL) {
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	printf("Digite um texto: ");
	fgets(texto, sizeof(texto), stdin);
	
	fprintf(arqn, "%s", texto);
	fclose(arqn);
	arqb = fopen("dados.dat", "wb");
	if (arqb == NULL) {
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	qnt = fwrite(texto, sizeof(char), strlen(texto), arqb);
	
	printf("Quantidade de elementos gravados: %d", qnt);
	
	fclose(arqb);
	return 0;
}
