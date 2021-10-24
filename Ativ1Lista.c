#include<stdio.h>

int main(){
	float dolar,real,resultado;
	
	printf("Informe a cotacao atual do dolar: ");
	scanf("%f",&dolar);
	printf("Informe a quantidade em reais disponivel para conversao: ");
	scanf("%f",&real);
	resultado = (real / dolar);
	printf("Valor Convertido: %.2f",resultado);
	
	return(0);
}
