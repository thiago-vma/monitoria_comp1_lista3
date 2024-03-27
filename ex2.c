
//RESOLUÇÃO EXERCÍCIO 2 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	int num1, num2;
	
	printf("Entre com o número 1: ");
	scanf("%d", &num1);
	printf("Entre com o número 2: ");
	scanf("%d", &num2);
	
	
	if (num1 > num2) {
	
		printf("O %d é maior do que %d\n", num1, num2);
	
	}  else {
	
		if (num2 > num1) {
		
			printf("O %d é maior do que %d\n", num2, num1);
	
		} else {
		
			printf("Números iguais\n");
		
		}
	}
}

