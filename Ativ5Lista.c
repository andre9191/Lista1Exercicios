#include<stdio.h>
#include<math.h>

int main(){
	double num,quadrado,raiz;
	printf("Digite um numero: ");
	scanf("%lf",&num);
	if(num >=0){
		quadrado = num * num;
		raiz = sqrt(num);
		printf("Resultado do numero digitado ao quadrado : %.2lf\nRaiz quadrada do numero digitado: %.2lf",quadrado,raiz);
	}
	else{
		printf("Numero digitado negativo!");
	}
}
