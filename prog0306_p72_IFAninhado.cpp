#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario;
printf("Qual o seu sal�rio: ");
scanf("%f", &salario);

if (salario<=0)
	printf("Sal�rio inv�lido. \n");
	else
		if (salario>1000)
			printf("Imposto = %.2f\n", salario * 0.10);
		else
			printf("Imposto = %.2f\n", salario * 0.05);
	
	return 0;
	system("PAUSE");
}
