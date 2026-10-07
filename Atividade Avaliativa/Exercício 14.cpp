#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int opc;
    
    do {
		printf("========================\n");
		printf("     SUPORTE DE TI      \n");
		printf("========================\n");
		printf("1 - Software\n");
		printf("2 - Hardware\n");
		printf("3 - Rede\n");
		printf("0 - Sair\n");
		printf("========================\n");
		printf("Escolha uma opção: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				printf("\nSuporte de Software selecionado\n\n");
				break;
				
			case 2:
				printf("\nSuporte de Software Hardware\n\n");
				break;
				
			case 3:
				printf("\nAtendimento de Rede\n\n");
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
