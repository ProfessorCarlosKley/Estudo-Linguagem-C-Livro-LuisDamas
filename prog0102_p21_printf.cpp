#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.

- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

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
	printf("Hoje est� um dia \"LINDO\" !!!\n");
	printf("\7"); //Emite o sinal padr�o do computador. 
	printf("\a"); //Emite o sinal padr�o do computador. 
	//printf("\v"); //tabula��o vertical - N�o funcionou nesse compilador.
	printf("\t\t\t\t"); //tabula��o vertical
	printf("Uso de tabulacoes..."); //tabula��o vertical
	
	//-----------------------------------------------------------
	
	
	return 0;
	system("PAUSE");
}
