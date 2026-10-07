#include <stdio.h>

int main() {
    int opcaoMenu, tipo, prioridade;
    

    int totalAtendimentos = 0;
    int qtdSoftware = 0;
    int qtdHardware = 0;
    int qtdRede = 0;
    int qtdUrgentes = 0;

    do {
        printf("\n=================================\n");
        printf("    CENTRAL DE SERVICOS DE TI    \n");
        printf("=================================\n");
        printf("1 - Registrar atendimento\n");
        printf("0 - Encerrar programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoMenu);

        if (opcaoMenu == 1) {
            do {
                printf("\n--- Tipo de Atendimento ---\n");
                printf("1 - Software\n");
                printf("2 - Hardware\n");
                printf("3 - Rede\n");
                printf("Opcao: ");
                scanf("%d", &tipo);

                if (tipo < 1 || tipo > 3) {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (tipo < 1 || tipo > 3);

            switch (tipo) {
                case 1:
                    qtdSoftware++;
                    break;
                case 2:
                    qtdHardware++;
                    break;
                case 3:
                    qtdRede++;
                    break;
            }

            do {
                printf("\n--- Prioridade ---\n");
                printf("1 - Urgente\n");
                printf("2 - Prioritario\n");
                printf("3 - Normal\n");
                printf("Opcao: ");
                scanf("%d", &prioridade);

                if (prioridade < 1 || prioridade > 3) {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (prioridade < 1 || prioridade > 3);

    
            if (prioridade == 1) {
                qtdUrgentes++;
            }


            totalAtendimentos++;
            printf("\nAtendimento registrado com sucesso!\n");

        } else if (opcaoMenu != 0) {
            printf("\nOpcao invalida! Digite 1 para registrar ou 0 para sair.\n");
        }

    } while (opcaoMenu != 0); 

    printf("\n=================================\n");
    printf("        RELATORIO FINAL          \n");
    printf("=================================\n");
    printf("Quantidade total de atendimentos: %d\n", totalAtendimentos);
    printf("  - Software: %d\n", qtdSoftware);
    printf("  - Hardware: %d\n", qtdHardware);
    printf("  - Rede: %d\n", qtdRede);
    printf("Quantidade de chamados urgentes: %d\n", qtdUrgentes);
    printf("=================================\n");

    return 0;
}
