#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>

int main(){
	
setlocale(LC_ALL, "Portuguese");
float x;

printf("Introduza um número real: ");
scanf("%f", &x);
printf("Parte inteira\t\t\t\t%d\n", (int) x);
printf("Parte Fracionária\t\t\t%f\n", x-((int) x));
//O valor de x menos o valor inteiro de x, resulta na parte fracionária.
//Como estamos usando LC_ALL podemos introduzir os números com a vírgula no lugar do ponto.
//Para obter a parte inteira de um float, basta fazer um casting para int que a parte fracionária é perdida.


	
	return 0;
	system("PAUSE");
}
