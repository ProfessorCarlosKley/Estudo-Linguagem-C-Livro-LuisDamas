#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.

- Como não é uma instrução de C, não vem seguida de (;) 

(p. 21-22)*/


int main(){
	printf("Hello World");
	printf("\n");
	
	
	//o mesmo programa poderia ser escrito de forma equivalente:
	
	printf("Hello - ");
	printf("Carlos ");
	printf("Kley.");
	
	//-----------------------------------------------------------
	
	printf("\n");
	printf("C\n");
	printf("is the greatest\n");
	printf("Language\n");
	printf("Hoje está um dia \"LINDO\" !!!\n");
	printf("\7"); //Emite o sinal padrão do computador. 
	printf("\a"); //Emite o sinal padrão do computador. 
	//printf("\v"); //tabulação vertical - Não funcionou nesse compilador.
	printf("\t\t\t\t"); //tabulação vertical
	printf("Uso de tabulacoes..."); //tabulação vertical
	
	//-----------------------------------------------------------
	
	
	return 0;
	system("PAUSE");
}
