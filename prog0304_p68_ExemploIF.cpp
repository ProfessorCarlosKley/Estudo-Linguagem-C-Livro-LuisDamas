#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario;

printf("Qual seu sal�rio? ");
scanf("%f", &salario);

if(salario<10000)
	salario += 1000;

printf("Sal�rio Final: %.2f\n",salario);
	//%.2f = exibe o flaot com duas cassa decimais.

	return 0;
	system("PAUSE");
}
