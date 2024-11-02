#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[100];
	short idade;
	float peso;
	float altura;
	char sangue[3];
	char sintomas[256];
} paciente_t;

int main() {
	FILE *arq;
	paciente_t paciente;
	
	arq = fopen("paciente.txt", "w");
	if (arq == NULL) {
		printf("Falha na abertura de arquivo!");
		return 0;
	}
	printf("Nome: ");
	fgets(paciente.nome, sizeof(paciente.nome), stdin);
	printf("Idade: ");
	scanf("%d", &paciente.idade);
	fflush(stdin);
	printf("Peso: ");
	scanf("%f", &paciente.peso);
	fflush(stdin);
	printf("Altura: ");
	scanf("%f", &paciente.altura);
	fflush(stdin);
	printf("Tipo sanguineo: ");
	scanf("%3s", paciente.sangue);
	fflush(stdin);
	printf("Sintomas: ");
	fgets(paciente.sintomas, sizeof(paciente.sintomas), stdin);
	
	fprintf(arq, "%s%d\n%.2f\n%.2f\n%s\n%s", paciente.nome, paciente.idade,
			paciente.peso, paciente.altura, paciente.sangue, paciente.sintomas);
	
	printf("Paciente cadastrado com sucesso!");
	fclose(arq);
	return 0;
}
