#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	char s1[] = "99";
	int v;
	
	setlocale(LC_ALL, "Portuguese");
	
	v = (int)strtol(s1, NULL, 10);
	
	printf("O quadrado do número salvo em s1 era: %d\n", v * v);
	
	return 0;
}
