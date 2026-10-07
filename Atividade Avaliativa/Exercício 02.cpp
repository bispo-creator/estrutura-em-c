#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	
	for(i = 20;i >= 1; i--){
		printf("%d\n",i);
	}
	printf("Fim da contagem!");
	return 0;
}
