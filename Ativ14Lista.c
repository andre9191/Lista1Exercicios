#include<stdio.h>
#include <math.h>

int main()
	{
	float imc, altura, massa;
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	printf("Agora digite seu peso em Kg: ");
	scanf("%f",&massa);
	imc = massa/(pow(altura,2));
	printf("Seu IMC: %.2f\n",imc);
	
	if(imc<20.0)
	{
		printf("Abaixo do Peso.");
	}
		else
		{
			if(imc>20.0 && imc<25.0)
			{
				printf("Peso normal");
			}
		
		else
		{
			if(imc>25.0 && imc<30.0)
			{
				printf("Sobre Peso");
			}
		
		else
		{
			if(imc>30.0 && imc<40.0)
			{
				printf("Obeso");
			}
		
		else
		{
			if(imc>=40.0)
			{
				printf("Obeso Morbido");
							}	
						}
					}
				}
			}
	return 0;
	}

