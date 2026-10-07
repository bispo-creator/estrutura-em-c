#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int opc;
    
    do {
		printf("========================\n");
		printf("          MENU          \n");
		printf("========================\n");
		printf("1 - Cadastrar\n");
		printf("2 - Consultar\n");
		printf("3 - Relatorio\n");
		printf("0 - Sair\n");
		printf("========================\n");
		printf("Escolha uma opção: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				printf("\n[Opção selecionada: Cadastrar]\n\n");
				break;
				
			case 2:
				printf("\n[Opção selecionada: Consultar]\n\n");
				break;
				
			case 3:
				printf("\n[Opção selecionada: Relatorio]\n\n");
				break;
				
			case 0:
				printf("\nSaindo do programa...\n");
				break;
				
			default:
				printf("\nOpção inválida! Tente novamente.\n\n");
				break;
		}
		
	} while(opc != 0);
	
	return 0;
}
