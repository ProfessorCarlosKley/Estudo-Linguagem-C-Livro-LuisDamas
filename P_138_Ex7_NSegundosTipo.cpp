#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 133)*/

#include <locale.h>

int segundos(int h, char t);

int main(){
	int hr;
	char tipo;
	int totalsegundos;
	printf("Informe a hora: ");
	scanf(" %d", &hr);
	printf("Informe h, m ou s, para a convers�o: ");
	scanf(" %c", &tipo);
	
	totalsegundos = segundos(hr, tipo);
	
	printf("%d, h tem: %d %c.", hr, totalsegundos, tipo);
	
	
	return 0;
	system("PAUSE");
}

int segundos(int h, char t){
	int result;
	   if(t = 'h'){
		   result = h;
	   }	
	   
	   if (t='m'){
 	   int min;
 	    min = h * 60;
	   result = min;
	   }
	   	   	 
	   if (t='s'){
		   int seg;
		   seg = h * 3600;
		   result = seg;
	   }
	   return result;
}