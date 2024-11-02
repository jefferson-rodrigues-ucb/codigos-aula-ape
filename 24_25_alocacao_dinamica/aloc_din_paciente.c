#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[100];
	short idade;
	float peso;
	float altura;
	char sintomas[256];
} paciente_t;

int main() {
	paciente_t *paciente;
	
	paciente = (paciente_t *) malloc(sizeof(paciente_t));					// Aloca um espaço do tamanho de paciente_t
	if (paciente == NULL) {
		printf("Erro na alocacao!");
		return 1;
	}
	printf("Digite o nome do paciente: ");
	fgets(paciente->nome, sizeof(paciente->nome), stdin);
	printf("Digite a idade: ");
	scanf("%d", &paciente->idade);
	fflush(stdin);
	printf("Digite o peso: ");
	scanf("%f", &paciente->peso);
	fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f", &paciente->altura);
	fflush(stdin);
	printf("Digite os sintomas do paciente: ");
	fgets(paciente->sintomas, sizeof(paciente->sintomas), stdin);
	
	printf("\nNome: %sIdade: %d\nPeso: %.2f\nAltura: %.2f\nSintomas: %s",
						paciente->nome, paciente->idade, paciente->peso,
						paciente->altura, paciente->sintomas);
						
	free(paciente);															// Libera a memória
	
	return 0;
}
