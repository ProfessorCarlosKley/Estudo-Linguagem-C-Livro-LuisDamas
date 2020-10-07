#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int n, num;

printf("Introduza um número: ");
scanf("%d", &num);
n = 1;

while (n<=10)
{
	printf("%2d * %2d = %2d\n", num, n, num * n);
	n =n+1;
}
	return 0;
	system("PAUSE");
}
