#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.

int main(){
	
char ch1, ch2;
	printf("Introduza um caractere: ");
	scanf("%c",&ch1);
	printf("Introduza outro caractere: ");
	scanf(" %c",&ch2);
	printf("Os caracteres introduzidos foram: '%c' e '%c'\n", ch1, ch2);
	/*
	Resolvendo problema do exemplo anterior: prog0212.
	A solução para isso é colocar um espaço antes do %c do segundo scanf.
	O espaço em branco dentro de um scanf pede a essa função para ler e
	ignorar todos os Espaços em Branco, New Lines e Tabs que encontrar.  
	*/
	return 0;
	system("PAUSE");
}
