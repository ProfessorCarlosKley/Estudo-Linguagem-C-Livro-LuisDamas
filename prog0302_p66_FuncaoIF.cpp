#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int x;

printf("Introduza um número: ");
scanf("%d", &x);

if (x>0)
	printf("Numero Positivo\n");
else
	printf("Numero Negativo\n");
	
	return 0;
	system("PAUSE");
}
