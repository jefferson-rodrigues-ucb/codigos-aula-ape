#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Atleta {
	char nome[100];
	char modalidade[100];
	float nota;
} atleta_t;

atleta_t* criar() {
	atleta_t *atleta;
	atleta = (atleta_t *) malloc(sizeof(atleta_t));
	if(atleta == NULL) {
		printf("Erro na alocação!");
		exit(EXIT_FAILURE);
	}
	printf("Digite o nome do atleta: ");
	fgets(atleta->nome, sizeof(atleta->nome), stdin);
	printf("Digite a modalidade do atleta: ");
	fgets(atleta->modalidade, sizeof(atleta->modalidade), stdin);
	printf("Digite a nota: ");
	scanf("%f", &atleta->nota);
	
	return atleta;
}

int main() {
	atleta_t *atleta;
	atleta = criar();
	
	printf("Atleta: %sModalidade: %sNota: %.3f\n", atleta->nome,
							atleta->modalidade, atleta->nota);
	
	free(atleta);
	exit(EXIT_SUCCESS);
}
