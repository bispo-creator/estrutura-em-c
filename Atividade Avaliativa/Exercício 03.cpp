#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	
	for(i = 1;i <= 50; i++){
		if (i % 2 == 0){
		    printf("%d\n",i);
		}
	}
	return 0;
}
