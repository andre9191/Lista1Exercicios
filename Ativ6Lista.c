#include <stdio.h>

int main(){
    int numA, numB;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numA);
    printf("Digite o segundo numero: ");
    scanf("%d", &numB);
    if(numA>numB)
	{
        printf("O maior numero digitado foi: %d", numA);
    }else
	{
        printf("O maior numero digitado foi: %d", numB);
    }
	return 0;
}
