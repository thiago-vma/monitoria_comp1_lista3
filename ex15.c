
// RESOLUÇÃO EXERCÍCIO 15 - LISTA DA AULA 3

#include <stdio.h>
#include <math.h>

void main(){

	float a, b, c;
	float delta, x1, x2;
	
	
	printf("Entre com os coeficientesda equação de segundo grau:\na = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	delta = (b*b) - (4 * a * c);
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	
	
	if(a == 0){
	
		printf("Não é equação de segundo grau\n");
	
	} else {
	
		if(delta < 0){
		
			printf("Não existe raiz\n");
		
		} else {
		
			if(delta == 0){
			
				printf("Raiz única, com o valor de %.2f: ", x1);
			
			} else {
			
				printf("Raiz 1: %.2f\nRaiz 2: %.2f\n", x1, x2);
			
			}
		}
	}
}

