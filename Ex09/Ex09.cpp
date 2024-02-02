#include <stdio.h>
int main(){
	int n, contador, tabuada;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(contador = 0; contador <= 10; contador ++){
		tabuada = 0;
		tabuada = n * contador;
		printf("O numero %d vezes %d eh igual a %d \n", n , contador, tabuada);
	}
}
