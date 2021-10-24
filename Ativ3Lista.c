#include<stdio.h>

int main()
{
	int valor;
	printf("Digite um numero entre 1 e 7 para exibir o dia da semana: ");
	scanf("%d",&valor);
	
	switch(valor)
	{
		case 1 :
			printf("Domingo\n");
		break;
		
		case 2 :
			printf("Segunda-Feira\n");
		break;
		
		case 3 :
			printf("Terca-Feira\n");
		break;
		
		case 4 :
			printf("Quarta-Feira\n");
		break;
		
		case 5 :
			printf("Quinta-Feira\n");
		break;
		
		case 6 :
			printf("Sexta-Feira\n");
		break;
		
		case 7 :
			printf("Sabado\n");
		break;	
	}
	return(0);
}
