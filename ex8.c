
// RESOLUÇÃO EXERCÍCIO 8 - LISTA DA AULA 3

#include <stdio.h>

void main() {

	int idade;
	
	printf("Entre com a idade do nadador: ");
	scanf("%d", &idade);
	
	if (idade < 5) {
	
		printf ("Não categorizado\n");
	
	} else {
	
		if (idade >= 5 && idade < 8) {
		
			printf("infantl A\n");
		
		} else {
		
			if (idade >= 8 && idade < 11) {
			
				printf("Infantil B\n");
			
			} else {
			
				if (idade >=11 && idade < 14) {
				
					printf("Juvenil A\n");
				
				} else {
				
					if (idade >= 14 && idade < 18) {
					
						printf("Juvenil B\n");
					
					} else {
					
						printf("Sênior\n");
					
					}
				}
			}
		}
	}
}

