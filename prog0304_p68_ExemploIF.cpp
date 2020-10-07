#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario;

printf("Qual seu salário? ");
scanf("%f", &salario);

if(salario<10000)
	salario += 1000;

printf("Salário Final: %.2f\n",salario);
	//%.2f = exibe o flaot com duas cassa decimais.

	return 0;
	system("PAUSE");
}
