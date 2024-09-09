#include <stdio.h> // funções de entrada e saída de dados

/*
Faça um programa que receba um valor do usuário e imprima um triângulo de * com aquele valor:

Exemplo:

Para n = 5

*
**
***
****
*****

*/
int main() {
	int linha, coluna, n;
	printf("Digite o tamanho da torre: ");
	scanf("%d", &n);
	
	for(linha = 1; linha <= n; linha++) {
		for (coluna = 1; coluna <= linha; coluna++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
