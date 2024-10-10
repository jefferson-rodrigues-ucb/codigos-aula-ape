#include <stdio.h>

// vetores são ponteiros para posição inicial
int main() {
	int v1[] = {1,2,3};
	int v2[] = {1,2,3};
	
	if (v1 == v2) {
		printf("Isso não deveria funcionar...\n");
	}
	
	printf("%d (%p)\n%d (%p)\n", *v1, v1, *v2, v2); 
	
	
	return 0;
}
