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
	printf("Estado Civil: ");
	scanf(" %c", &est_civil); //Observe o espa�o antes de %c, para evitar espa�o, tabe e enter no buffer.
	
	if (est_civil == 'C' || est_civil == 'c')
		printf("Imposto: %.2f \n ", salario * 0.09);	
	else
		if (est_civil == 'S' || est_civil == 's') 
			printf("Imposto: %.2f \n ", salario * 0.10);	
		else
			printf("Estado civil incorreto!!! \n");	
	
	return 0;
	system("PAUSE");
}
