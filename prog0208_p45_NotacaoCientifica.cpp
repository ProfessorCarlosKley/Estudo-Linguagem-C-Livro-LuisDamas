#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.

- Como não é uma instrução de C, não vem seguida de (;) */
int main(){
	
float quilos = 1.0E3; /*uma tonelada corresponde a mil quilos.*/
double gramas = 1.0e06; /*uma tonelada são um milhão de gramas.*/
float n_toneladas;

printf("Quantos quilos voce comprou: ");
scanf("%f", &n_toneladas);
printf("N° de Quilos = %f = %e\n", n_toneladas * quilos,
                                   n_toneladas * quilos);
printf("N° de Gramas = %f = %e\n", n_toneladas * gramas,
                                   n_toneladas * gramas); 


	return 0;
	system("PAUSE");
}
