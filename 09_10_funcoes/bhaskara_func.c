#include <stdio.h>
#include <math.h>
#include <locale.h>

float delta(float a, float b, float c) {
	return b*b - 4*a*c;
}

void bhaskara(float a, float b, float c) {
	float x1, x2;
	float d = delta(a, b, c);
	if (d > 0) {
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("x = {%.2f, %.2f}", x1, x2);
	} else if (d == 0) {
		x1 = (-b)/(2*a);
		printf("x = {%.2f}", x1);
	} else {
		printf("Não há raizes reais.");
	}
}

int main() {
	float a, b, c;

	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	if (a == 0) {
		printf("a não pode ser zero.");
		return 1;
	}
	
	bhaskara(a, b, c);
	
	return 0;
}
