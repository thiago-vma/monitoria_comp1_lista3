
// RESOLUÇÃO EXERCÍCIO 12 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	int num = 0;
	
	printf("Entre com um número entre 1 e 7: ");
	scanf("%d", &num);
	
	switch(num){
	
		case 1: printf("Domingo\n"); break;
		case 2: printf("Segunda-feira\n"); break;
		case 3: printf("Terça-feira\n"); break;
		case 4: printf("Quarta-feira\n"); break;
		case 5: printf("Quinta-feira\n"); break;
		case 6: printf("Sexta-feira\n"); break;
		case 7: printf("Sábado\n"); break;
		default: printf("Número inválido\n"); break;
	
	}
}

