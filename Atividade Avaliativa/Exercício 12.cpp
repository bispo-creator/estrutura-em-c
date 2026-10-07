#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int idade;
	
	do{
		printf("Digite uma idade válida: ");
		scanf("%d",&idade);
		if (idade < 0){
			printf("Idade inválida.\n");
		}
	}while (idade < 0);
	
	printf("Idade registrada: %d",idade);
	
	
	return 0;
}
