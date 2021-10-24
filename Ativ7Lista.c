#include<stdio.h>

int main(){
	int bolaverde,bolaamarela,bolabranca,resultado,pv,pa,pb;	
	printf("Digite a quantidade de bola(s) verde(s): ");
	scanf("%d",&bolaverde);
	printf("Digite a quantidade de bola(s) amarela(s): ");
	scanf("%d",&bolaamarela);
	printf("Digite a quantidade de bola(s) branca(s): ");
	scanf("%d",&bolabranca);
	pv = bolaverde * 10;
	pa = bolaamarela * 5;
	pb = bolabranca *3;
	resultado = pv + pa +pb;
	printf("Pontuacao final: %d",resultado);
	return 0;
}
