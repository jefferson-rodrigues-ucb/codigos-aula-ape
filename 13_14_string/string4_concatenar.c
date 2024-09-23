#include <stdio.h>
#include <string.h>

int main() {
	char nome1[] = "Seu nome: ";
	char nome2[101];
	
	printf("Digite um nome: ");
	fgets(nome2, 100, stdin);
	
	strcat(nome1, nome2);
	
	printf("%s", nome1);
	
	return 0;
}
