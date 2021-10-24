#include<stdio.h>

int main(){
	int numero,expoente,i,resultado;
	
	printf("Digite o numero base: ");
	scanf("%d",&numero);
	printf("Digite o numero expoente: ");
	scanf("%d",&expoente);
	for(i=0;i<expoente;i++)
	{
			resultado *= numero;
	}	
	printf("%d elevado a %d = %d.",numero,expoente,resultado);
	
	return 0;
}
