#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

int max(int a, int b){
	if (a > b)
		return a;
	else
		return b;
}

int main(){
setlocale(LC_ALL, "Portuguese");

int x, y;
printf("Introduza dois n�meros: ");
scanf("%d%d", &x, &y);

printf("O maior entre %d e %d � %d \n", x, y, max(x, y));


	return 0;
	system("PAUSE");
	
}
