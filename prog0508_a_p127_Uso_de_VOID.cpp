#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

void linha (int num, char ch){
	//em c, uma fun��o que retorna void, � considerada um procedimento.
	int i;
	for (i = 1; i <= num; i++)
		putchar(ch);
	putchar('\n');
}
int main(){
setlocale(LC_ALL, "Portuguese");

linha(3,'+');
linha(3,'+');
linha(7,'-');
linha(5,'+');
linha(3,'+');

	return 0;
	system("PAUSE");
	
}
