#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario;
printf("Qual o seu salário: ");
scanf("%f", &salario);

if (salario<=0)
	printf("Salário inválido. \n");
	else
		if (salario>1000)
			printf("Imposto = %.2f\n", salario * 0.10);
		else
			printf("Imposto = %.2f\n", salario * 0.05);
	
	return 0;
	system("PAUSE");
}
