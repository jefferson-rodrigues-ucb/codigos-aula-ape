#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

typedef struct Aluno {
	char nome[100];
	int faltas;
	float nota;
}aluno_t;

int main() {
	int i;
	aluno_t *alunos;
	
	alunos = calloc(N, sizeof(aluno_t));
	if (alunos == NULL) {
		printf("Erro em alocar o vetor!");
		return 0;
	}
	
	for (i = 0; i < N; i++) {
		printf("Digite o nome do aluno %d: ", i+1);
		fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
		alunos[i].nome[strlen(alunos[i].nome)-1] = '\0';
		printf("Digite a quantidade de faltas: ");
		scanf("%d", &alunos[i].faltas);
		fflush(stdin);
		printf("Digite a nota final do aluno: ");
		scanf("%f", &alunos[i].nota);
		fflush(stdin);		
	}
	for (i = 0; i < N; i++) {
		printf("Aluno %d: %s, %d faltas, NF: %.2f\n", i+1, alunos[i].nome,
							alunos[i].faltas, alunos[i].nota);	
	}
	free(alunos);
	return 0;
}
