#include <stdio.h>
#include <string.h>

int main() {
	char boasvindas[101] = "Bem-vindo, ";
	char nome[101];
	int i;
	
	printf("Digite seu nome: ");
	fgets(nome, 100, stdin);
	
	for (i = 0; i < strlen(nome); i++) {
		if (nome[i] == ' ') break;
	}
	
	strncat(boasvindas, nome, i);
	
	printf("%s", boasvindas);
	
	return 0;
}
