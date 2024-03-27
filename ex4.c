
//RESOLUÇÃO EXERCÍCIO 4 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	float salario = 0, prestacao = 0;
	float calculo = 0;
	
	printf("Entre com o valor do salário: ");
	scanf("%f", &salario);
	printf("Entre com o valor da prestação do empréstimo: ");
	scanf("%f", &prestacao);

	calculo = salario * 0.2;

	if (prestacao > calculo) {
	
		printf("Empréstimo concedido\n");
	
	} else {
	
		printf("Empréstimo não concedido\n");
	
	}
}

