#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
	char nome[100];
	int faltas;
	float nota;
}aluno_t;

int main() {
	aluno_t *aluno;
	aluno = (aluno_t *) malloc(sizeof(aluno_t));			// Aloca um espaço do tamanho de paciente_t
	if (aluno == NULL) {
		printf("Deu ruim!");
		return 1;
	}
	
	printf("Digite o nome do aluno: ");
	fgets(aluno->nome, sizeof(aluno->nome), stdin);
	printf("Digite a quantidade de faltas: ");
	scanf("%d", &aluno->faltas);
	fflush(stdin);
	printf("Digite a nota: ");
	scanf("%f", &aluno->nota);
	fflush(stdin);
	
	printf("Estudante %sFaltas: %d\nNota: %.2f\nSituacao: %s", aluno->nome, aluno->faltas,
				aluno->nota, aluno->faltas < 15 && aluno->nota >= 7 ? "Aprovado" : "Reprovado");
		
	free(aluno);											// Libera a memória
	return 0;
}
