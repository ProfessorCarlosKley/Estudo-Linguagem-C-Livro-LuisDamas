#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int x, y, temp;

printf("Indtroduza dois n�meros: ");
scanf("%d %d", &x, &y);

if (x>y)
{
	temp = x;
	x = y;
	y = temp;
} //Depois do fechamento de um bloco, n�o precisa por ;

printf("%d %d\n", x,y);

	return 0;
	system("PAUSE");
}
