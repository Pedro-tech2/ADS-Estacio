#include <stdio.h.>

//Construindo operadores lógicos
int main () {
	int idade;
	int temConvite;   // 1 = sim, 0 não
	int acompanhando; // 1 = sim, 0 = não
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	printf("Tem convite? (1 = sim, 0 = nao): ");
	scanf("%d", &acompanhando);
	
	if ((idade >= 18 && temConvite) || acompanhando) {
		printf("entrada permetida\n");
	} else {
		printf("entrada negada\n");
	}
	
	return 0;

}