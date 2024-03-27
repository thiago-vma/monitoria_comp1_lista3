
//RESOLUÇÃO EXERCÍCIO 7 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	float valori = 0, valorf = 0;
	int estado = 0;
	
	printf("Entre com o valor inicial do produto: ");
	scanf("%f", &valori);
	printf("Entre com o NÚMERO do estado de destino (MG = 1; SP = 2; RJ = 3; MS = 4): ");
	scanf("%d", &estado);
	
	if (estado == 1) {
	
		valorf = valori * 1.07;
		printf("O valor final é: %.2f\n", valorf);
	
	} else {
	
		if (estado == 2) {
		
			valorf = valori * 1.12;
			printf("O valor final é: %.2f\n", valorf);
		
		} else {
		
			if (estado == 3) {
			
				valorf = valori * 1.15;
				printf("O valor final é: %.2f\n", valorf);
			
			} else {
			
				if (estado == 4) {
				
					valorf = valori * 1.08;
					printf("O valor final é: %.2f\n", valorf);
				
				} else {
				
					printf("Número inválido\n");
				
				}
			}
		}
	}
}

