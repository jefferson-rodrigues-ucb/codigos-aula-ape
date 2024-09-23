#include <stdio.h>
#include <string.h>

int main() {
	char nome1[] = "Teste";
	char nome2[101];
	
	//nome2 = nome1; // Não pode
	
	strcpy(nome2, nome1); // nome2 = nome1
	
	printf("%s = %s\n", nome1, nome2);
	
	nome2[4] = 's';
	
	printf("%s = %s\n", nome1, nome2);
	
	return 0;
}
