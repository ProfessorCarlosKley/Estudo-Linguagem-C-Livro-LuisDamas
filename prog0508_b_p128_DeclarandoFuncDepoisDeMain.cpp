#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

void linha(int num, char ch);//Prot�tipo de fun��o. Declarada depois de ser chamada em main.
//Para contornar erro do compilador, uma vez que main chama a fun��o que est� declarada depois dela.
int main(){
setlocale(LC_ALL, "Portuguese");
//Para c essa chamada gera um erro, pois o compilador chama a fun��o antes de encontr�-la
linha(3,'+');
linha(3,'+');
linha(7,'-');
linha(5,'+');
linha(3,'+');

	return 0;
	system("PAUSE");
	
}
void linha (int num, char ch){
	//em c, uma fun��o que retorna void, � considerada um procedimento.
	int i;
	for (i = 1; i <= num; i++)
		putchar(ch);
	putchar('\n');
}
