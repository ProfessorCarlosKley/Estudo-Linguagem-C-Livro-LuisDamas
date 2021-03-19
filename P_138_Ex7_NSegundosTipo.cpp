#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/

#include <locale.h>

int segundos(int h, char t);

int main(){
	int hr;
	char tipo;
	int totalsegundos;
	printf("Informe a hora: ");
	scanf(" %d", &hr);
	printf("Informe h, m ou s, para a conversão: ");
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