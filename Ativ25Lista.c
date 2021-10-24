#include<stdio.h>

int main(){
	float massa;
	int segundos=0;
	printf("Digite a massa do material:");
	scanf("%f",&massa);
	while(massa>=1.45){
		massa = massa - (massa*0.13);
		segundos+=20;
		printf("passado %d segundos | Massa e igual a %.2f\n",segundos,massa);
		_sleep(500);
	}
	printf("Foram necessarios %d segundos para massa decair\n",segundos);
	return 0;
}
