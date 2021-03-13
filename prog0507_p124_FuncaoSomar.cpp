#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
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
printf("Introduza dois números: ");
scanf("%d%d", &n, &i);
total = somar(n,i);
printf("%d + %d = %d \n ", n, i, total);
printf("2 * %d = %d e 2 * %d = %d\n", n, dobro(n), i, dobro(i));

	return 0;
	system("PAUSE");
	
}
