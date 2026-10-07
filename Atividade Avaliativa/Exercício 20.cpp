#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int opcao;
	int codigo;
	int tipo;
	int prioridade;

	int totalChamados = 0;
	int software = 0;
	int hardware = 0;
	int rede = 0;
	int urgentes = 0;

	do {
		printf("========================\n");
		printf("    SISTEMA DE SUPORTE  \n");
		printf("========================\n");
		printf("1 - Registrar chamado\n");
		printf("2 - Relatorio\n");
		printf("0 - Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1:
				printf("\n--- REGISTRO DE CHAMADO ---\n");
				printf("Digite o código do chamado: ");
				scanf("%d", &codigo);

				printf("Informe o tipo:\n");
				printf("1 - Software\n");
				printf("2 - Hardware\n");
				printf("3 - Rede\n");
				printf("Opcao: ");
				scanf("%d", &tipo);

				while (tipo < 1 || tipo > 3) {
					printf("Tipo inválido! Digite 1 (Software), 2 (Hardware) ou 3 (Rede): ");
					scanf("%d", &tipo);
				}

				printf("Informe a prioridade:\n");
				printf("1 - Urgente\n");
				printf("2 - Prioritario\n");
				printf("3 - Normal\n");
				printf("Opcao: ");
				scanf("%d", &prioridade);

				while (prioridade < 1 || prioridade > 3) {
					printf("Prioridade inválida! Digite 1 (Urgente), 2 (Prioritario) ou 3 (Normal): ");
					scanf("%d", &prioridade);
				}

				totalChamados++;

				if (tipo == 1) {
					software++;
				} else if (tipo == 2) {
					hardware++;
				} else if (tipo == 3) {
					rede++;
				}

				if (prioridade == 1) {
					urgentes++;
				}

				printf("-> Chamado %d registrado com sucesso!\n\n", codigo);
				break;

			case 2:
				printf("\n========================\n");
				printf("       RELATÓRIO        \n");
				printf("========================\n");
				printf("Total de chamados registrados: %d\n", totalChamados);
				printf("Chamados de Software: %d\n", software);
				printf("Chamados de Hardware: %d\n", hardware);
				printf("Chamados de Rede: %d\n", rede);
				printf("Chamados Urgentes: %d\n", urgentes);
				printf("========================\n\n");
				break;

			case 0:
				printf("\nEncerrando o sistema... Até logo!\n");
				break;

			default:
				printf("\nOpção inválida! Tente novamente.\n\n");
				break;
		}

	} while (opcao != 0);

	return 0;
}
