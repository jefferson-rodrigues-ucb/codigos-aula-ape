#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

void printar(aluno_t *aluno) {
    printf("Estudante %sFaltas: %d\nNota: %.2f\nSituacao: %s\n", aluno->nome,
           aluno->faltas, aluno->nota,
           aluno->faltas < 15 && aluno->nota >= 7 ? "Aprovado" : "Reprovado");
}

aluno_t *criar() {
    aluno_t *aluno;
    aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (aluno == NULL) {
        printf("Deu ruim!");
        return NULL;
    }
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &aluno->faltas);
    fflush(stdin);
    printf("Digite a nota: ");
    scanf("%f", &aluno->nota);
    fflush(stdin);
    printf("Aluno criado\n");
    aluno->prox = NULL;

    return aluno;
}

int main() {
    aluno_t *primeiro_aluno, *aux;
    int continuar;

    primeiro_aluno = criar();
    aux = primeiro_aluno;
    // Carregar a lista
    do {
        aux->prox = criar();
        if (aux->prox != NULL) aux = aux->prox;
        printf("\nDigite zero para parar: ");
        scanf("%d", &continuar);
        fflush(stdin);
    } while (continuar);

    // Exibe a lista
    aux = primeiro_aluno;
    while (aux != NULL) {
        printar(aux);
        aux = aux->prox;
    }

    // Limpar a lista
    do {
        aux = primeiro_aluno;
        while (aux->prox->prox != NULL) {
            aux = aux->prox;
        }
        printf("free %s\n", aux->prox->nome);
        free(aux->prox);
        aux->prox = NULL;
    } while (aux != primeiro_aluno);

    free(primeiro_aluno);
    return 0;
}
