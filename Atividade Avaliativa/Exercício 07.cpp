#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i,qtd;
	float nota;
	
	printf("Digite a quantidade de estudantes da turma: ");
	scanf("%d",&qtd);
	
	for (i = 1; i <= qtd; i++){
		printf("\n ----- ESTUDANTE %d ----- \n",i);
		
		printf("Digite a nota do estudande: ");
		scanf("%f",&nota);
		
		printf("Nota registrada: %.1f\n", nota);
		
		if(nota>= 7){
			printf ("Situação: nota maior ou igual a 7\n");
		}else{
			printf ("Situação: nota menor que 7\n");
		}
	  return 0;	
	}
}
