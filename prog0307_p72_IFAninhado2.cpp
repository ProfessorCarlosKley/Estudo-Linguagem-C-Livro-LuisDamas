#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario, taxa;
printf("Qual o seu sal�rio: ");
scanf("%f", &salario);

if (salario<1000)
	taxa = .05;
	else
		if (salario<5000)
			taxa=.11;
		else
			taxa= .35;
	
	//Sempre que existir if e else aninhados, o else sempre pertence ao �ltimo if.
	
	printf("Sal�rio: %.2f Imposto: %.2f L�quido: %.2f\n",
				salario, salario*taxa, salario * (1.0-taxa));
				
	return 0;
	system("PAUSE");
}
