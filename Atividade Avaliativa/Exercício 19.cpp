#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float valor;
	float total = 0.0;
	float media;
	
	printf("--- REGISTRO DE VENDAS ---\n\n");
	
	for(i = 1; i <= 5; i++){
		printf("Digite o valor da %dª venda: R$ ", i);
		scanf("%f", &valor);
		
		while(valor < 0){
			printf("Valor inválido! Digite um valor maior ou igual a zero: R$ ");
			scanf("%f", &valor);
		}
		
		total = total + valor;
	}
	
	media = total / 5;
	
	printf("\n========================\n");
	printf("    RESUMO DE VENDAS    \n");
	printf("========================\n");
	printf("Total vendido: R$ %.2f\n", total);
	printf("Média das vendas: R$ %.2f\n", media);
	printf("========================\n");
	
	return 0;
}
