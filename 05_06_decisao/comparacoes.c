#include<stdio.h>

int main() {
	int a, b, c;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
	
	if (a == b) printf("a igual a b\n");							// igualdade
	if (b != c) printf("b diferente de c\n");						// diferença
	if (a < b) printf("a menor que b\n");							// menor
	if (b > c) printf("b maior que c\n");							//maior
	if (a >= c) printf("a maior ou igual a c\n");					// maior ou igual
	if (b <= c) printf("b menor ou igual a c\n");					// menor ou igual
	
	if (a == b && a == c) printf("Todos sao iguais\n");				// AND: todos devem ser verdadeiros
	if (a != b || a != c) printf("Ha um valor diferentes de a\n");	// OR: pelo menos um verdadeiro
	if (!(a == b)) printf("a nao eh igual ao b");					// NOT: inverte o valor
	
	return 0;
}
