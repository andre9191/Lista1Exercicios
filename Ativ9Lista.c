#include <stdio.h>

int main(){
	float km_litro, tempo, velocidade, distancia, litros;
	printf("Digite o tempo da da viagem (Em horas) e a velocidade(Km)");
	scanf("%f%f",&tempo,&velocidade);
	distancia = tempo*velocidade;
	printf("Digite o consumo em km/l do automovel");
	scanf("%f",&km_litro);
	litros = distancia/km_litro;
	printf("Quantidade de litros utilizados: %.2f\n",litros);
	return 0;
}

