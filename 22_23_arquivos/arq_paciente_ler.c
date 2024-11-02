#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *arq;
	int i;
	char texto[256];
	char campos[][50] = {"Nome: ", "Idade: ", "Peso: ", "Altura: ",
							"Tipo Sanguineo: ", "Sintomas: "};
	
	arq = fopen("paciente.txt", "r");
	if (arq == NULL) {
		printf("Falha na abertura de arquivo!");
		return 0;
	}
	for (i = 0;fgets(texto, sizeof(texto), arq); i++) {
		printf("%s%s", campos[i], texto);
	}
	
	fclose(arq);
	return 0;
}
