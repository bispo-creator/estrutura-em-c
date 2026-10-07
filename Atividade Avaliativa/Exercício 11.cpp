#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	
	while(numero<0){
		 printf("Valor inválido! \n");
	     printf("Digite novamente: \n");
	     scanf("%d",&numero);
	}
	printf("\nValor Aceito: %d\n");
	printf("Programa encerrado.\n");
	
	return 0;
	
}
	  
	     
	     
