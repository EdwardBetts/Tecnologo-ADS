#include <stdio.h>
#include <stdlib.h>

main(){
	//declara uma variavel.
	int var; 
	
	//declara um ponteiro apontando para um inteiro.
	int *ptr; 
	
	// atribui um valor a uma vari�vel.
	var = 10; 
	
	/*
		atribui ao valor do ponteiro o valor do endere�o de mem�ria da
		variavel "var"
	*/
	ptr = &var; 
	
	
    int newVar = *ptr; //atribui a newVar o valor do ponteiro
	
	*ptr = 20; //altera o valor do ponteiro
	
	
	/*
		Mostra o valor da vari�vel que foi alterado acima pelo ponteiro
	*/
	printf("%d",var); 
}