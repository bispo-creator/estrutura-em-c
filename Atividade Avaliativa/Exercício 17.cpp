#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int status;
	int funcionando = 0;
	int com_defeito = 0;
	
	printf("--- REGISTRO DE COMPUTADORES ---\n");
	printf("Digite 1 para Funcionando ou 0 para Com defeito.\n\n");
	
	for(i = 1; i <= 10; i++){
		printf("Computador %d: ", i);
		scanf("%d", &status);
		
		while(status != 0 && status != 1){
			printf("Valor inválido! Digite apenas 1 (Funcionando) ou 0 (Com defeito): ");
			scanf("%d", &status);
		}
		
		if(status == 1){
			funcionando++;
		} else {
			com_defeito++;
		}
	}
	
	printf("\n========================\n");
	printf("    RELATÓRIO FINAL     \n");
	printf("========================\n");
	printf("Computadores funcionando: %d\n", funcionando);
	printf("Computadores com defeito: %d\n", com_defeito);
	
	return 0;
}
