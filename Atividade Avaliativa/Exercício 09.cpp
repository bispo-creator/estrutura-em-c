#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf("Digite um número inteiro (ou 0 para sair): ");
	scanf("%d", &numero);
	
	while(numero != 0){
		printf("Você digitou: %d\n\n", numero);
		
		printf("Digite outro número inteiro (ou 0 para sair): ");
		scanf("%d", &numero);
	}
	
	printf("\nPrograma encerrado.\n");
	
	return 0;
}
