#include <stdio.h>
#include <stdlib.h>

/*
	Soma dos termos de 1 at� N (informado pelo usu�rio).
*/

main(){
    int	numero , progressao;
    
    printf("Digite um numero: ");
    scanf("%d",&numero);
    
    // ( n1 + Nn ) * N / 2
	progressao = ( (1 + numero) * numero ) / 2;

	printf("Soma de 1 ate %d = %d",numero,progressao); 
	
}