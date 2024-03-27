
// RESOLUÇÃO EXERCÍCIO 10 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	float a=0, b=0, c=0; 
	int x=0;
	float res = 0;
	
	printf("Entre com o número um: ");
	scanf("%f", &a);
	printf("Entre com o número dois: ");
	scanf("%f", &b);
	printf("Entre com o número três: ");
	scanf("%f", &c);
	printf("Entre com o dígito da operação matemática: ");
	scanf("%d", &x);
	
	if (a < 0 || b < 0 || c < 0){
	
		printf("Números devem ser positivos");
	
	} else {
	
		if(x == 1){ // média geométrica
		
			res = a * b * c;
			printf("O resultado da média geométrica é: %.2f", res);
		
		 }else{
		 
		 	if(x == 2){ // média ponderada
		 	
		 		res = (a + (2*b) + (3*c)) / 6;
		 		printf("O resultado da média ponderada é: %.2f", res);
		 	
		 	} else {
		 	
		 		if(x == 3){ // média harmônica
		 		
		 			res = 1 / ((1/a) + (1/b) + (1/c));
		 			printf("O resultado da média harmônica é: %.2f", res);
		 		
		 		} else {
		 		
		 			if(x == 4){ // média aritmética
		 			
		 				res = (a + b + c) / 3;
		 				printf("O resultado da média aritmética é: %.2f", res);
		 			
		 			} else {
		 				printf("Opção Inválida");
		 			}
		 		}
		 	}
		 }
	}
}

