#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	char nome[100];
	int idade;
	int faltas;
	float nota;
} aluno_t;

void imprimir(aluno_t a) {
	printf("Nome: %s, %d anos, %d faltas, tem a nota: %.2f\n",
			a.nome, a.idade, a.faltas, a.nota);
}

int main() {
	int n;
	aluno_t *alunos;
	int i, maior_nota = 0, aprov = 0;
	float media_idade = 0.0;
	char num[20], nome[30];
	srand((unsigned)time(NULL));
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &n);
	alunos = (aluno_t *) calloc(n, sizeof(aluno_t));
	if(alunos == NULL) {
		printf("Erro na alocação!");
		return 1;
	}
		
	for (i = 0; i < n; i++) {
		strcpy(nome, "Fulano ");
		sprintf(num, "%d", i+1);
		strcpy(alunos[i].nome, strcat(nome, num));
		alunos[i].idade = rand() % 40 + 17;
		alunos[i].faltas = rand() % 20;
		alunos[i].nota = (rand() % 601 + 400) /  100.0;
	}
	printf("Alunos aprovados:\n");
	for (i = 0; i < n; i++) {
		if (alunos[i].nota >= 7 && alunos[i].faltas < 15) {
			imprimir(alunos[i]);
			aprov++;
		}
		if (alunos[maior_nota].nota < alunos[i].nota) {
			maior_nota = i;
		}
		media_idade += alunos[i].idade;
	}
	media_idade /= n;
	printf("Quantidade de aprovados %d\n", aprov);
	printf("Maior nota: ");
	imprimir(alunos[maior_nota]);
	printf("A média de idade é: %.2f\n", media_idade);
	printf("Alunos reprovados:\n");
	for (i = 0; i < n; i++) {
		if (alunos[i].nota < 7 || alunos[i].faltas >= 15) {
			imprimir(alunos[i]);
		}
	}
	return 0;
}

