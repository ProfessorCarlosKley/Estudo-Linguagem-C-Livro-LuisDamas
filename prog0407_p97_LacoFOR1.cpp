#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int n, num, soma, produto;
printf("Digite um inteiro: 	");
scanf("%d", &num);

for (soma = 0, n = produto = 1; n <= num; n = n+1)
//For � indicado para quando sabermos o n�mero de itera��es.
{
	soma = soma + n;
	produto = produto * n;
}

printf("Soma = %d\n Produto = %d \n", soma, produto);

	return 0;
	system("PAUSE");
}
