#include <stdio.h> // funções de entrada e saída de dados

/* Faça um programa que simule a urna eletrônica */
int main() {
	int voto, jair = 0, carlos = 0, neves = 0, nulo = 0, branco = 0,
		total;
	
	do {
		printf("As opcoes sao:\n1. Candidato Jair Rodrigues\n");
		printf("2. Candidato Carlos Luz\n3. Candidato Neves Rocha\n");
		printf("4. Nulo\n5. Branco\nEntre com o seu voto: ");
		scanf("%d", &voto);
		
		switch(voto) {
			case 1: jair++; break;
			case 2: carlos++; break;
			case 3: neves++; break;
			case 4: nulo++; break;
			case 5: branco++; break;
		}
	} while (voto != 0);
	
	printf("Candidato Jair Rodrigues: %d\n", jair);
	printf("Candidato Carlos Luz: %d\n", carlos);
	printf("Candidato Neves Rocha: %d\n", neves);
	
	total = jair + carlos + neves + nulo + branco;
	printf("A porcentagem de votos nulos: %.2f%%\n", (float)nulo/total*100);
	printf("A porcentagem de votos brancos: %.2f%%\n", (float)branco/total*100);
	
	if(jair > carlos && jair > neves) printf("Candidato Jair Rodrigues vencedor");
	else if (carlos > neves) printf("Candidato Carlos Luz vencedor");
	else printf("Candidato Neves Rocha vencedor");
	
	return 0;
}
