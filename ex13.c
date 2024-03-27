
// RESOLUÇÃO EXERCÍCIO 13 - LISTA DA AULA 1

#include <stdio.h>

void main(){

	int operacao =0; 
	float num1 = 0, num2 = 0, res = 0;
	
	printf("Entre com o número referente a opeção desejada\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\nDigite: ");
	scanf("%d", &operacao);
	printf("Entre com o primeiro número: ");
	scanf("%f", &num1);
	printf("Entre com o segundo número: ");
	scanf("%f", &num2);
	
	switch(operacao){
	
		case 1: res = num1 + num2;
			printf("O resultado da operação é: %.2f\n", res); break;
		case 2: res = num1 - num2;
			printf("O resultado da operação é: %.2f\n", res); break;
		case 3: res = num1 * num2;
			printf("O resultado da operação é: %.2f\n", res); break;
		case 4: res = num1 / num2;
			printf("O resultado da operação é: %.2f\n", res); break;
			
		default: printf("Número Inválido\n"); break;
	
	}		
}

