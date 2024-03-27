
//RESOLUÇÃO EXERCÍCIO 3 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	int num = 0, res = 0;
	
	printf("Entre com o valor desejado: ");
	scanf("%d", &num);

	res = num % 2;
	
	if (res == 0) {
	
		printf("Número par\n");
	
	} else {
	
		printf("Número ímpar\n");
	
	}
}

