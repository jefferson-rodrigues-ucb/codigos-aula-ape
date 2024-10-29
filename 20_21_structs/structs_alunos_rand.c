#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	char nome[100];
	int idade;
	char curso[100];
	float nota;
} aluno_t;

void imprimir(aluno_t a) {
	printf("Nome: %s, %d anos, cursa %s, tem a nota: %.2f\n",
			a.nome, a.idade, a.curso, a.nota);
}

int main() {
	aluno_t alunos[20];
	int i, velho = 0, nota = 0;
	char num[20], nome[30];
	srand((unsigned)time(NULL));
		
	for (i = 0; i < 20; i++) {
		strcpy(nome, "Fulano ");
		sprintf(num, "%d", i+1);
		strcpy(alunos[i].nome, strcat(nome, num));
		alunos[i].idade = rand() % 40 + 17;
		strcpy(alunos[i].curso, "Engenharia de Software");
		alunos[i].nota = (rand() % 601 + 400) /  100.0;
	}
	printf("Alunos com mais de 22:\n");
	for (i = 0; i < 20; i++) {
		if (alunos[i].idade > 22) {
			printf("%s\n", alunos[i].nome);
		}
	}
	printf("Aluno mais velho: ");
	for (i = 1; i < 20; i++) {
		if (alunos[velho].idade < alunos[i].idade){
			velho = i;
		}
	}
	imprimir(alunos[velho]);
	printf("Aluno com a melhor nota: ");
	for (i = 1; i < 20; i++) {
		if (alunos[nota].nota < alunos[i].nota){
			nota = i;
		}
	}
	imprimir(alunos[nota]);
	printf("Alunos reprovados:\n");
	for (i = 0; i < 20; i++) {
		if (alunos[i].nota < 7.0) {
			printf("%s\n", alunos[i].nome);
		}
	}
	
	return 0;
}
