#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int n;
n=10;

while (n)
/*A condi��o de wile � representada pela pr�pria vari�vel n, isto �, a condi��o de while � verdadeira
quando na apresentar um valor que n�o seja zero (pois zero � Falso). Dessa forma, escrever while(n) ou
while(!=0) � exatamente o mesmo.*/

{
	printf("%d\n", n);
	n =n-1;
}
	return 0;
	system("PAUSE");
}
