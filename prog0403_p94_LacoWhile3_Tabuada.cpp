#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int n;
n=1;

while (n<=10)

{
	printf("5 * %2d = %2d\n", n, 5*n);
	n =n+1;
}
	return 0;
	system("PAUSE");
}
