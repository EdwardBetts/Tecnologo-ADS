#include <stdio.h>
#include <stdlib.h>

/*
	Diferen�a dos n�meros pares e impares de 0 a 100.
*/

int pares = 0;
int impares = 0;

void main(){
	int i;
	for (i = 0;i < 100; i++){
		if (i % 2 == 0){
			pares += i;
		}else{
			impares += i;
		}
	}
	
	int	diferenca = pares - impares;
	
	printf("Soma dos pares: %d\n",pares);
	printf("Soma dos impares: %d\n",impares);
	printf("Diferenca de pares e impares: %d",diferenca);
}
