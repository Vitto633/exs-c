#include <stdio.h>
int main(){
	int n, c = 1, i = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	while(n>c){
		if(n%c == 0){
			i = i +1;
		}
		c = c +1;
	}
	if(i==1){
		printf("O numero eh primo.");
	}
	else{
		printf("O numero nao eh primo.");
	}
}
