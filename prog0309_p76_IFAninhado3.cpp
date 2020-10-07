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
	printf("Estado Civil: ");
	scanf(" %c", &est_civil); //Observe o espaço antes de %c, para evitar espaço, tabe e enter no buffer.
	
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
