#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.

- Como não é uma instrução de C, não vem seguida de (;) 

(p. 21-22)*/

int main(){

int num1, num2;

printf("Introduza dois numero: ");
scanf("%d%d", &num1, &num2); //Para leitura de valores. scanf = leitura formatada.
//O primeiro argumento indica o tipo de dados que vamos ler;
//O segundo argumento, a variável que receberá o valor lido. 
//Ver página 63 de C completo e Total. (Ponteiro e uso de &)
printf("O resultado de %d + %d = %d\n",num1, num2, num1+num2);

	return 0;
	system("PAUSE");
}
