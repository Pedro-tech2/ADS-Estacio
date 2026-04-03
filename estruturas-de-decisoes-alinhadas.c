
#include <stdio.h>

int main() {
	int opcao;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &opcao);
	

	if(opcao >= 0){
		if(opcao == 0){
			printf("\nNumero nulo.\n");
		}else{
			printf("\nNumero positivo.\n");
	}
	} else{
		printf("\nNumero negativo.\n");
		
	}
	
	return 0;
}
   

