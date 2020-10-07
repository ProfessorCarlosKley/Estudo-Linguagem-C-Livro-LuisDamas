#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario, taxa;
printf("Qual o seu salário: ");
scanf("%f", &salario);

if (salario<1000)
	taxa = .05;
	else
		if (salario<5000)
			taxa=.11;
		else
			taxa= .35;
	
	//Sempre que existir if e else aninhados, o else sempre pertence ao último if.
	
	printf("Salário: %.2f Imposto: %.2f Líquido: %.2f\n",
				salario, salario*taxa, salario * (1.0-taxa));
				
	return 0;
	system("PAUSE");
}
