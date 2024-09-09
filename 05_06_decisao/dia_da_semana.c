#include <stdio.h> // funções de entrada e saída de dados
#include <locale.h> // Modifica a codificação do terminal, permitindo acentuação no terminal DOS

int main() {
	int dia;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o dia (1-7): ");
	scanf("%d", &dia);
	
	// O switch case só aceita valores constantes (não são permitidas expressões condicionais).
	switch(dia) {
		case 1: printf("domingo"); break; //O break é usado para sair do switch após executar o bloco de código correspondente.
		case 2: printf("segunda"); break;
		case 3: printf("terça"); break;
		case 4: printf("quarta"); break;
		case 5: printf("quinta"); break;
		case 6: printf("sexta"); break;
		case 7: printf("sábado"); break;
		default: printf("opção inválida"); // default é executado quando nenhum dos casos anteriores corresponde ao valor da expressão.
	}
	
	return 0;
}
