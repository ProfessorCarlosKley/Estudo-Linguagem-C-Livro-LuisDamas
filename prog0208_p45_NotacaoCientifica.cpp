#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.

- Como n�o � uma instru��o de C, n�o vem seguida de (;) */
int main(){
	
float quilos = 1.0E3; /*uma tonelada corresponde a mil quilos.*/
double gramas = 1.0e06; /*uma tonelada s�o um milh�o de gramas.*/
float n_toneladas;

printf("Quantos quilos voce comprou: ");
scanf("%f", &n_toneladas);
printf("N� de Quilos = %f = %e\n", n_toneladas * quilos,
                                   n_toneladas * quilos);
printf("N� de Gramas = %f = %e\n", n_toneladas * gramas,
                                   n_toneladas * gramas); 


	return 0;
	system("PAUSE");
}
