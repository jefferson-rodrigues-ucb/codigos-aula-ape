#include <stdio.h>
#include <string.h>

/* Apresente o tamanho da string */
int main() {
	char s1[] = "Teste";
	char s2[101];
	
	printf("Digite um nome: ");
	fgets(s2, 100, stdin);
	
	s2[strlen(s2)-1] = '\0'; // substituição do \n em \0
	
	printf("%s: %d\n", s1, strlen(s1));
	printf("%s: %d\n", s2, strlen(s2));
	
	return 0;
}
