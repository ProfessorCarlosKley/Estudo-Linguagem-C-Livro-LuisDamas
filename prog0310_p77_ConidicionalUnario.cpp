#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


float salario;
char est_civil;

	printf("Informe o seu salario: ");
	scanf("%f", &salario);
		
	salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
	
	printf("Novo Sal�rio: %.2f \n", salario);
		
	return 0;
	system("PAUSE");
}
