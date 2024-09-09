#include <stdio.h> // funções de entrada e saída de dados

/*
(Kelley&Pohl) Considerando a=1, b=2, c=3, d=4, e=5 compute as expressões abaixo.

a * b / c
a * b % c + 1
++ a * b - c --
7 - - b * ++ d
a / b / c
7 + c * -- d / e
2 * a % - b + c + 1
39 / - ++ e - + 29 % c
7 - + ++ a % (3+b)
*/
int main() {
	int a = 1, b = 2, c = 3, d = 4, e = 5;
	printf("a * b / c = %.3f\n", (float)a * b / c);							// 0.667
	printf("a * b %% c + 1 = %d\n", a * b % c + 1);							// 3
	printf("++a * b - c-- = %d\n", ++a * b - c--);							// 1
	printf("7 - - b * ++d = %d\n", 7 - - b * ++d);							// 17
	printf("a / b / c = %.3f\n", (float)a / b / c);							// 0.5
	printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);				// 8.600
	printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);				// 3
	printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);		// -7.500
	printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));					// 4
	
	return 0;
}
