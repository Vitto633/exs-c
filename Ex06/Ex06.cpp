#include <stdio.h>
int main(){
	int n, resultado, i , fatorial;
	
	printf("Digite um numero:");
	scanf("%d", &n);
	i = n;
	
	while(i > 0){
		
		fatorial = n*i;
		resultado = resultado + fatorial;
		i = i - 1;
	}
	printf("O fatorial de %d eh igual a %d", n, resultado);
}
