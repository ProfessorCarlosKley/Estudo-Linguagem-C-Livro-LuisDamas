#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

linha(int num, char ch){//fun��o que preenche linha com *
	int i;
	for(i=1; i<=num; i++)
		putchar(ch);
	putchar('\n');
}

int main(){
setlocale(LC_ALL, "Portuguese");

linha(3, '+');
linha(5, '+');	
linha(7, '-');
linha(5, '+');
linha(3, '+');

	return 0;
	system("PAUSE");
	
}
