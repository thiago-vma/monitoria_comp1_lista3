
// RESOLUÇÃO EXERCÍCIO 9 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	float peso = 0, altura = 0;
	
	printf("Entre com o seu peso em Kg: ");
	scanf("%f", &peso);
	printf("Entre com a sua altura em metros: ");
	scanf("%f", &altura);
	
	if (altura < 1.20) { // bloco de código responsável pela linha de alturas menores que 1,20 metros
		if (peso < 60) {
			printf("Classificação A");
		} else {
			if (peso >= 60 && peso <= 90) {
				printf("Classificação D");
			} else {
				printf("Classificação G");
			}
		}
	} else {
		if (altura >= 1.20 && altura <= 1.70) { // bloco de código responsável pela linha de altura entre 1,20 e 1,70
			if (peso < 60){
				printf("Classificação C");
			} else {
				if (peso >= 60 && peso <= 90){
					printf("Classificação E");
				} else {
					printf("Classificação H");
				}
			}
		} else {
			if (peso < 60){
				printf("Classificação C");
			} else { // bloco de código responsável pela linha de altura acima de 1,70
				if (peso >= 60 && peso <= 90){
					printf("Classificação F");
				} else {
					printf("Classificação I");
				}
			}
		}
	}
}


