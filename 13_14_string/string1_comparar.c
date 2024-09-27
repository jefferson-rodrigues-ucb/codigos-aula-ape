#include <stdio.h>
#include <string.h>

/* Como comparar duas strings */
int main() {
	char s1[] = "Teste";
	char s2[] = {'T','e','s','t','e','\0'};
	
	if (s1 == s2) {
		printf("Isso não deveria funcionar!");
	}
	
	/* Quando strcmp for zero, os dois textos são iguais */
	if (strcmp(s1, s2) == 0) {
		printf("Iguais.");
	}
	
	return 0;
}
