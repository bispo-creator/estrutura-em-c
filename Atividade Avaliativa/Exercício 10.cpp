#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int senha;
	
	printf("Digite uma senha númerica: ");
	scanf ("%d",&senha);
	
	while (senha !=1234){
		printf("Senha incorreta.\n");
		printf("Digite a senha novamente: ");
		scanf("%d",&senha);
	}
	printf("Acesso permitido.\n");
	return 0;
}
