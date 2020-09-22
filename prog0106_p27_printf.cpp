#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.

- Como não é uma instrução de C, não vem seguida de (;) 

(p. 21-22)*/


int main(){
	printf("\tClientes\n");
	printf("\tFornecedores\n");
	printf("\tFatura\n");
	printf("\tSair\n");

		
	return 0;
	system("PAUSE");
}
