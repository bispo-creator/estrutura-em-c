#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int qtd,i,codigo;
	float preco;
	
	 printf ("Digite a quantidade de produtos: ");
	 scanf("%d",&qtd);
	 
	 for (i = 1; i <= qtd; i++) {
		printf("\n--- Produto %d ---\n", i);
		
		printf("Digite o código do produto: ");
		scanf("%d", &codigo);
		
		printf("Digite o preço do produto: R$ ");
		scanf("%f", &preco);
		
		printf("\n[Dados do Produto Cadastrado]\n");
		printf("Código: %d\n", codigo);
		printf("Preço: R$ %.2f\n", preco);
	}
	
	return 0;
}
