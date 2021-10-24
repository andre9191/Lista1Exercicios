#include<stdio.h>

int main()
{
	int mbps,kbps;
	
	printf("Conversor Mbps para Kbps\nDigite o valor de Mbps:");
	scanf("%d",&mbps);
	kbps = (mbps*1000);
	printf("Resultado da conversao em kbps: %d",kbps); 	
}

