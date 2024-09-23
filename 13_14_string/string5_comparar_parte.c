#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	char s1[] = "Engenharia de Software";
	char s2[] = "Engenharia Elétrica";
	
	setlocale(LC_ALL, "Portuguese");
	
	if (strncmp(s1, s2, 11) == 0) {
		printf("São cursos de Engenharia");
	}
	
	return 0;
}
