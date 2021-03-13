#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

linha(int num){//função que preenche linha com *
	int i;
	for(i=1; i<=num; i++)
		putchar('*');
	putchar('\n');
}

int main(){
setlocale(LC_ALL, "Portuguese");

linha(3);
linha(5);
linha(7);
linha(5);
linha(3);

	return 0;
	system("PAUSE");
	
}
