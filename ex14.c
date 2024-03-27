
// RESOLUÇÃO EXERCÍCIO 14 - LISTA DA AULA 3

#include <stdio.h>

void main(){

	int num1 = 0;
	float res1, res2;
	
	printf("Entre com o número para saber se é divisível por 3 ou 5: ");
	scanf("%d", &num1);
	
	res1 = num1 % 3;
	res2 = num1 % 5;
	
	printf("res1 = %f\n", res1);
	printf("res2 = %f\n", res2);
	
	if(res1 == 0 && res2 != 0){
	
		printf("O número %d é divisível por 3!\n", num1);
	
	} else {
	
		if(res2 == 0 && res1 != 0){
		
			printf("O número %d é divisível por 5!\n",num1);
		
		}
	}
}

