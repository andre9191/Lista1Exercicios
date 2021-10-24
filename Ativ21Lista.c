#include<stdio.h>

int main(){
	int n, i, anterior = 0, inicio = 1, sequencia;
	printf("Digite a quantidade de termos para sequencia de Fibonacci: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		printf("%d, ",inicio);
		sequencia = inicio + anterior;
		anterior = inicio;
		inicio = sequencia;
	}
	return 0;
}
