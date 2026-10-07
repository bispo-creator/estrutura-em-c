#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i,num;
	
	for (i = 1; i <= 10; i++){
		printf("Digite o %d número: ",i);
		scanf("%d",&num);
		
		if(num>0){
			printf("NÚMERO POSITIVO\n\n");
		}else if(num<0){
			printf("NÚMERO NEGATIVO\n\n");
		}else{
			printf("NÚMERO = 0\n\n");
		}
	return 0;
}
}
	

