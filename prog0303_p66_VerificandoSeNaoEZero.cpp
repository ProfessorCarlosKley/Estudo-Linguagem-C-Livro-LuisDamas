#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int x;

printf("Introduza um n�mero: ");
scanf("%d", &x);

if (x!=0)
	printf("N�o � zero\n");
else
	printf("Valor zero foi digitado.\n");
	
	return 0;
	system("PAUSE");
}
