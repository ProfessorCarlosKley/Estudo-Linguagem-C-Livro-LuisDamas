#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario, imposto = 0.0;
char sexo;

printf("Sal�rio? ");
scanf("%f", &salario);
printf("Sexo (M) ou  (F)? ");
scanf(" %c", &sexo); //aten��o para espa�o no segundo scanf, para ignorar espa�o, enter e tabs no buffer.

switch(sexo){
	case 'm' :
	case 'M' : 
		imposto = imposto + 0.05;

	case 'f' :
	case 'F' :
		imposto = imposto + 0.10;
	//Caso seja Masculino ser� calculado 0.05 depois segue e calcula mais 10 pois n�o tem break.
	//Caso seja Feminino s� calcular� 0.10. 
	
	default  : "Sexo n�o informado...\n";
}

printf("Imposto %.2f\n", salario * imposto);
	return 0;
	system("PAUSE");
}
