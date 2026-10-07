#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
	int qtd,i,cod,prioridade;
	
	printf ("Quantidade de chamados: ");
	scanf("%d",&qtd);
	
	for (i = 1; i <= qtd; i++){
		printf("\n === CHAMADO %d ===\n", i);
		printf("Código: ");
		scanf("%d",&cod);
		
		do{
			printf("Prioridade [1- Urgente 2- Prioritário 3- Normal]:");
			scanf("%d",&prioridade);
			
			if(prioridade <1|| prioridade > 3){
				printf("Prioridade inválidade!\n");
			}   
	    }while(prioridade < 1 || prioridade > 3);
	    
	    if(prioridade == 1){
    	printf("Classificação: URGENTE\n");
        }else if(prioridade == 2){
    	printf("Classificação: PRIORITÁRIO\n");
	    }else{
		printf("Classificação: NORMAL\n");
	}
    }
    
	printf("\nCadastro finalizados.\n");
}
