
//RESOLUÇÃO EXERCÍCIO 6 - LISTA DA AULA 3

#include <stdio.h>
#include <string.h>

void main() {

	float h, peso, imc;
	char sexo;
	
	printf("Entre com o seu sexo ('m' para masculino e 'f' para feminino): ");
	scanf("%c", &sexo);
	printf("Agora entre como sua altura no seguinte formato (Ex: 1.73): ");
	scanf("%f", &h);
	
	if (sexo == 'm') {
	
		imc = (72.7 * h) - 58;
	
	} else {
	
		imc = (62.1 * h) - 44.7;
	
	}

	printf("O seu peso ideal é: %.2f\n", imc);

}
