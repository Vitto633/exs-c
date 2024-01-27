#include <stdio.h>

int main(){
	int C, F; 
	
	printf("Digite a temperatura em graus celsius:");
	scanf("%d", &C);
	
	F = (C * 9/5)+35;
	
	printf("A temperatura em graus fahrenheit eh de %d", F);
}
