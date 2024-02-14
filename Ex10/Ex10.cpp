#include <stdio.h>
int main(){
	int valor, unidade, dezena, centena,milhar,  resultado;
	
	printf("Digite a centena a ser invertida: ");
	scanf("%d", &valor);
	
	unidade = valor %10;
	dezena = (valor %100)/ 10;
	centena = valor /100;
	milhar = valor %1000;
	resultado = unidade * 1000 + dezena * 100 + centena * 10 + milhar;
	
	printf("O valor %d ao contrario eh: %d", valor, resultado);
	
}
