#include <stdio.h>
#include <string.h>

/* Apresente o tamanho da string */
int main() {
	char nome1[] = "Teste";
	char nome2[101];
	
	printf("Digite um nome: ");
	fgets(nome2, 100, stdin);
	
	nome2[strlen(nome2)-1] = '\0'; // substituição do \n em \0
	
	printf("%s: %d\n", nome1, strlen(nome1));
	printf("%s: %d\n", nome2, strlen(nome2));
	
	return 0;
}
