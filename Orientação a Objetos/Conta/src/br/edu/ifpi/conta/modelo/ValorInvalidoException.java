package br.edu.ifpi.conta.modelo;

public class ValorInvalidoException extends RuntimeException{

	ValorInvalidoException(double valor){
		super("Valor inv�lido :R$ "+valor);
	}
	
}
