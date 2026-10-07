#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	int num;
	int result;
	
	printf ("Qual a tabuada a ser impressa? ");
	scanf("%d",&num);
	
	for(i = 1; i <= 10; i++){
	    result = num * i;
	    
	    printf("%d x %d = %d\n",num,i,result);
	}
	return 0;
}
