#include <stdio.h>
#include <stdlib.h>

/*
	Soma de 1 + 1/2 + ... + 1/N de 1 at� um N informado pelo usu�rio.
*/

main(){
	int num, i;
	float soma; 
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	for( i = 1 ; i <= num; i++){
		
		//Divis�o de 1 / numero_atual (1/1 , 1/2 , 1/3 ,.., 1/N)
        //Realizando casting da vari�vel para resultar em float
        
		soma += 1 / (float)i;
	}
	
	printf("Soma: %1.2f",soma);
}