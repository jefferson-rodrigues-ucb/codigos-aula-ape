#include <stdio.h>
#include <string.h>

/* Como comparar duas strings */
int main() {
	char nome1[] = "Teste";
	char nome2[] = {'T','e','s','t','e','\0'};
	
	if (nome1 == nome2) {
		printf("Isso não deveria funcionar!");
	}
	
	/* Quando strcmp for zero, os dois textos são iguais */
	if (strcmp(nome1, nome2) == 0) {
		printf("Iguais.");
	}
	
	return 0;
}
