#include <stdio.h>
int main(){
	int n1, n2, soma;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &n1);
	printf("Digite o segundo valor:");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	printf("A soma dos dois numeros eh igual a %d", soma);
}
