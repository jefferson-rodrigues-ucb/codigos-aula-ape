#include <stdio.h>
#include <string.h>

struct paciente_t {
	char nome[100];
	int idade;
	int leito;
};

int main() {
	struct paciente_t paciente1, paciente2; // Declaração de variáveis
	
	strcpy(paciente1.nome, "Fulano de Tal"); // Atribuição, usamos o . para acessar os campos
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
