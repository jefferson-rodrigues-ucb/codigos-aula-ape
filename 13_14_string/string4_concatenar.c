#include <stdio.h>
#include <string.h>

int main() {
	char sdest[101] = "Seu nome: ";
	char nome[101];
	
	printf("Digite um nome: ");
	fgets(nome, 100, stdin);
	
	strcat(sdest, nome);
	
	printf("%s", sdest);
	
	return 0;
}
