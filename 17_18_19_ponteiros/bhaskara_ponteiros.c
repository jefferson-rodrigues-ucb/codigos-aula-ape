#include<stdio.h>
#include<math.h>

float delta (float a, float b, float c) {
	return b*b - 4 * a * c;
}

void bhaskara(float a, float b, float c, float *x1, float *x2, float *d) {
	*d = delta(a, b, c);
	if (*d >= 0) {
		*x1 = (-b + sqrt(*d))/(2*a);
	}
	if (*d > 0) {
		*x2 = (-b - sqrt(*d))/(2*a);
	} 
}

int main() {
	float a, b, c, d, x1, x2;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	bhaskara(a, b, c, &x1, &x2, &d);
	
	if (d > 0) {
		printf("X = {%.2f, %.2f}\n", x1, x2);
	} else if (d == 0) {
		printf("X = {%.2f}\n", x1);
	} else {
		printf("Nao ha raizes reais");
	}
	
	return 0;
}
