#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeroAleatorio, numero, contador=0;
	
	srand(time(NULL));
	numeroAleatorio = rand()%10;
	do{
		printf("Numero da sorte:");
		scanf("%d",&numero);
		contador++;
	}while(numero!=numeroAleatorio);
	printf("Voce acertou em: %d Tentativas\n",contador);
	return 0;
}
