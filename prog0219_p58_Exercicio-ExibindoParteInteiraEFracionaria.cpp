#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>

int main(){
	
setlocale(LC_ALL, "Portuguese");
float x;

printf("Introduza um n�mero real: ");
scanf("%f", &x);
printf("Parte inteira\t\t\t\t%d\n", (int) x);
printf("Parte Fracion�ria\t\t\t%f\n", x-((int) x));
//O valor de x menos o valor inteiro de x, resulta na parte fracion�ria.
//Como estamos usando LC_ALL podemos introduzir os n�meros com a v�rgula no lugar do ponto.
//Para obter a parte inteira de um float, basta fazer um casting para int que a parte fracion�ria � perdida.


	
	return 0;
	system("PAUSE");
}
