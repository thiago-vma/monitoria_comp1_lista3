
//RESOLUÇÃO EXERCICIO 5 - LISTA DA AULA 3

#include <stdio.h>
#include <math.h>

void main() {

	int num = 0;
	int quadrado = 0;
	float raiz = 0;
	
	printf("Entre com o valor desejado: ");
	scanf("%d", &num);
	
	if (num >= 0) {
	
		quadrado = num * num;
		raiz = sqrt(num);
		
		printf("O quadrado de %d é: %d\n", num, quadrado);
		printf("A raiz de %d é: %.2f\n", num, raiz);

	} else {
	
		printf("O número não é positivo");
	
	}
}

