#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int opc;
	int codigo;
	int tipo;
	char prioridade[20];
	
	do {
		printf("========================\n");
		printf("        MENU            \n");
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
				printf("\n--- Novo Chamado ---\n");
				
				printf("Digite o código: ");
				scanf("%d", &codigo);
				
				printf("Selecione o Tipo:\n");
				printf("1 - Software\n");
				printf("2 - Hardware\n");
				printf("3 - Rede\n");
				printf("Opção: ");
				scanf("%d", &tipo);
				
				printf("Digite a prioridade (ex: Baixa, Média, Urgente): ");
				scanf("%s", prioridade);
				
				printf("\n========================\n");
				printf("   CHAMADO CADASTRADO   \n");
				printf("========================\n");
				printf("Código: %d\n", codigo);
				
				switch(tipo){
					case 1:
						printf("Tipo: Software\n");
						break;
					case 2:
						printf("Tipo: Hardware\n");
						break;
					case 3:
						printf("Tipo: Rede\n");
						break;
					default:
						printf("Tipo: Inválido\n");
						break;
				}
				
				printf("Prioridade: %s\n", prioridade);
				printf("========================\n\n");
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
