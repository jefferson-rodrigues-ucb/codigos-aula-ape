#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[100];
	int idade;
	int leito;
} paciente_t;

int main() {
	paciente_t paciente1, paciente2;
	paciente_t *pp1, *pp2;
	
	pp1 = &paciente1;
	pp2 = &paciente2;
	
	strcpy((*pp1).nome, "Fulano de Tal");
	(*pp1).idade = 78;
	(*pp1).leito = 224;
	
	strcpy(pp2->nome, "Ciclano de Tal");
	pp2->idade = 24;
	pp2->leito = 225;
	
	printf("Paciente: %s, %d anos, Leito: %d\n", paciente1.nome, paciente1.idade, paciente1.leito);
	printf("Paciente: %s, %d anos, Leito: %d\n", paciente2.nome, paciente2.idade, paciente2.leito);
	
	return 0;
}
