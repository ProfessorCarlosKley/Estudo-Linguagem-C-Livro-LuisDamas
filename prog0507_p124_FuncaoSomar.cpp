#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

int somar(int a, int b){
	return a + b;
}

int dobro(int x){
	return 2*x;
}

int main(){
setlocale(LC_ALL, "Portuguese");

int n, i, total;
printf("Introduza dois n�meros: ");
scanf("%d%d", &n, &i);
total = somar(n,i);
printf("%d + %d = %d \n ", n, i, total);
printf("2 * %d = %d e 2 * %d = %d\n", n, dobro(n), i, dobro(i));

	return 0;
	system("PAUSE");
	
}
