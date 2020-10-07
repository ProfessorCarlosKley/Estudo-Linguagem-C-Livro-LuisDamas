#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


float salario;
char est_civil;

	printf("Informe o seu salario: ");
	scanf("%f", &salario);
		
	salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
	
	printf("Novo Salário: %.2f \n", salario);
		
	return 0;
	system("PAUSE");
}
