#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
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
printf("Introduza dois números: ");
scanf("%d%d", &x, &y);

printf("O maior entre %d e %d é %d \n", x, y, max(x, y));


	return 0;
	system("PAUSE");
	
}
