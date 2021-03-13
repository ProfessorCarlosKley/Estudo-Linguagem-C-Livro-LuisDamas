#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

linha(){//função que preenche linha com *
	int i;
	for(i=1; i<=20; i++)
		putchar('*');
	putchar('\n');
}

int main(){
setlocale(LC_ALL, "Portuguese");
int i;

linha();
puts("Números entre 1 e 5");
linha();

for (i=1; i<=5; i++)
	printf("%d\n", i);
linha();	




	return 0;
	system("PAUSE");
}
