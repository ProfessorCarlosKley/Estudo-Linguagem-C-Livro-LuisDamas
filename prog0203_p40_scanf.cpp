#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.

- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 21-22)*/

int main(){

int num1, num2;

printf("Introduza dois numero: ");
scanf("%d%d", &num1, &num2); //Para leitura de valores. scanf = leitura formatada.
//O primeiro argumento indica o tipo de dados que vamos ler;
//O segundo argumento, a vari�vel que receber� o valor lido. 
//Ver p�gina 63 de C completo e Total. (Ponteiro e uso de &)
printf("O resultado de %d + %d = %d\n",num1, num2, num1+num2);

	return 0;
	system("PAUSE");
}
