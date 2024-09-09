#include <stdio.h>
#include <locale.h>

/*
Um exemplo legal de do...while é um validador de idade,
que só permite passar se digitar um valor válido.
*/
int main() {
	int idade;
	setlocale(LC_ALL, "Portuguese");
	
	do {
		printf("Qual é a sua idade? ");
		scanf("%d", &idade);
	} while (idade < 0 || idade > 130);
	
	printf("Sua idade é %d\n", idade);
	return 0;
}
