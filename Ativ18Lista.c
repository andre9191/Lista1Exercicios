#include<stdio.h>

int main(){
	int num,mult,i,b;
	printf("Digite o numero para exibir a tabuada:\t");
	scanf("%d",&num);
	printf("Ate qual numero deseja multiplicar a tabuada:\t");
	scanf("%d",&b);
	for(i = 0; i <= b; i++){
		mult = num*i;
		printf("%d X %d = %d\n",num,i,mult);
		_sleep(300);
	}
	
	return 0;
}
