#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.

- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 21-22)*/

int main(){

float raio, perimetro;
double Pi = 3.1415926579323846, area;

	printf("Introduza o raio da circunferencia: ");
	scanf("%f",  &raio);
	area = Pi * raio * raio;
	perimetro = 2 * Pi * raio;
	
	printf("Area = %.2f\n Per�metro = %.2f\n", area, perimetro);
	

	return 0;
	system("PAUSE");
}
