#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

linha3x(){//fun��o que preenche linha com *
	int i;
	for(i=1; i<=3; i++)
		putchar('*');
	putchar('\n');
}
linha5x(){//fun��o que preenche linha com *
	int i;
	for(i=1; i<=5; i++)
		putchar('*');
	putchar('\n');
}
linha7x(){//fun��o que preenche linha com *
	int i;
	for(i=1; i<=7; i++)
		putchar('*');
	putchar('\n');
}

int main(){
setlocale(LC_ALL, "Portuguese");
int i;

linha3x();
linha5x();
linha7x();
linha5x();
linha3x();

	return 0;
	system("PAUSE");
}
