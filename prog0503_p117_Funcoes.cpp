#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

linha(){//fun��o que preenche linha com *
	int i;
	for(i=1; i<=20; i++)
		putchar('*');
	putchar('\n');
}

int main(){
setlocale(LC_ALL, "Portuguese");
int i;

linha();
puts("N�meros entre 1 e 5");
linha();

for (i=1; i<=5; i++)
	printf("%d\n", i);
linha();	




	return 0;
	system("PAUSE");
}
