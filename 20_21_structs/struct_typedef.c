#include <stdio.h>
#include <string.h>

// Com o typedef podemos renomear os tipos de dados
typedef struct {
	char nome[100];
	int idade;
	int leito;
} paciente_t;

int main() {
	paciente_t paciente1, paciente2;
	
	strcpy(paciente1.nome, "Fulano de Tal");
	paciente1.idade = 99;
	paciente1.leito = 110;
	
	strcpy(paciente2.nome, "Ciclano de Tal");
	paciente2.idade = 97;
	paciente2.leito = 111;
	
	printf("Paciente %s, %d anos, leito: %d\n",
			paciente1.nome, paciente1.idade, paciente1.leito);
	printf("Paciente %s, %d anos, leito: %d\n",
			paciente2.nome, paciente2.idade, paciente2.leito);
	
	
	return 0;
}
