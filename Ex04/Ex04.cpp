#include <stdio.h>
int main(){
	int n, resultado;
	
	printf("Digite o numero:");
	scanf("%d", &n);
	
	resultado = n%2;
	
	if(resultado == 0){
		printf("O numero %d eh par.",n );
	}
	else{
		printf("O numero %d eh impar", n);	
	}
}
