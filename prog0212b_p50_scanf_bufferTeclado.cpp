#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.

int main(){
	
char ch1, ch2;
	printf("Introduza um caractere: ");
	scanf("%c",&ch1);
	printf("Introduza outro caractere: ");
	scanf(" %c",&ch2);
	printf("Os caracteres introduzidos foram: '%c' e '%c'\n", ch1, ch2);
	/*
	Resolvendo problema do exemplo anterior: prog0212.
	A solu��o para isso � colocar um espa�o antes do %c do segundo scanf.
	O espa�o em branco dentro de um scanf pede a essa fun��o para ler e
	ignorar todos os Espa�os em Branco, New Lines e Tabs que encontrar.  
	*/
	return 0;
	system("PAUSE");
}
