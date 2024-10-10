#include <stdio.h>

/*
Como string é vetor, também é um ponteiro
*/
int main() {
	char s1[] = "Engenharia de Software";
	
	printf("%c, %p\n", *s1, s1);
	
	return 0;
}
