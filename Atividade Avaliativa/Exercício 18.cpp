#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int opcao;
	int total_software = 0;
	int total_hardware = 0;
	int total_rede = 0;
	int total_geral = 0;
	
	printf("--- CONTROLE DE ATENDIMENTOS ---\n");
	printf("Opções:\n");
	printf("1 - Software\n");
	printf("2 - Hardware\n");
	printf("3 - Rede\n\n");
	
	for(i = 1; i <= 10; i++){
		printf("Atendimento %d: ", i);
		scanf("%d", &opcao);
		
		while(opcao < 1 || opcao > 3){
			printf("Opção inválida! Digite 1 (Software), 2 (Hardware) ou 3 (Rede): ");
			scanf("%d", &opcao);
		}
		
		switch(opcao){
			case 1:
				total_software++;
				break;
			case 2:
				total_hardware++;
				break;
			case 3:
				total_rede++;
				break;
		}
	}
	
	total_geral = total_software + total_hardware + total_rede;
	
	printf("\n========================\n");
	printf("    RELATÓRIO FINAL     \n");
	printf("========================\n");
	printf("Software: %d\n", total_software);
	printf("Hardware: %d\n", total_hardware);
	printf("Rede: %d\n", total_rede);
	printf("Total de atendimentos: %d\n", total_geral);
	printf("========================\n");
	
	return 0;
}
