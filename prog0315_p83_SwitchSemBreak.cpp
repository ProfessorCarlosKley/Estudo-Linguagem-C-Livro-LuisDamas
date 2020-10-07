#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

float salario, imposto = 0.0;
char sexo;

printf("Salário? ");
scanf("%f", &salario);
printf("Sexo (M) ou  (F)? ");
scanf(" %c", &sexo); //atenção para espaço no segundo scanf, para ignorar espaço, enter e tabs no buffer.

switch(sexo){
	case 'm' :
	case 'M' : 
		imposto = imposto + 0.05;

	case 'f' :
	case 'F' :
		imposto = imposto + 0.10;
	//Caso seja Masculino será calculado 0.05 depois segue e calcula mais 10 pois não tem break.
	//Caso seja Feminino só calculará 0.10. 
	
	default  : "Sexo não informado...\n";
}

printf("Imposto %.2f\n", salario * imposto);
	return 0;
	system("PAUSE");
}
