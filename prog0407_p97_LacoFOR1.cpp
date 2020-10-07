#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int n, num, soma, produto;
printf("Digite um inteiro: 	");
scanf("%d", &num);

for (soma = 0, n = produto = 1; n <= num; n = n+1)
//For é indicado para quando sabermos o número de iterações.
{
	soma = soma + n;
	produto = produto * n;
}

printf("Soma = %d\n Produto = %d \n", soma, produto);

	return 0;
	system("PAUSE");
}
