#include <stdlib.h>
#include <stdio.h>

main(){
	int num, fatorial = 1;
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	while (num > 0){
		fatorial *= num;
		num--;
	}
	
	printf("Fatorial de %d �: %d",num,fatorial);
	
}