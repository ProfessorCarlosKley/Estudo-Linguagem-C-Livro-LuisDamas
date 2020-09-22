#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.

- Como não é uma instrução de C, não vem seguida de (;) 

(p. 21-22)*/

int main(){

float raio, perimetro;
double Pi = 3.1415926579323846, area;

	printf("Introduza o raio da circunferencia: ");
	scanf("%f",  &raio);
	area = Pi * raio * raio;
	perimetro = 2 * Pi * raio;
	
	printf("Area = %.2f\n Perímetro = %.2f\n", area, perimetro);
	

	return 0;
	system("PAUSE");
}
