#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.

- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 133)*/
#include <locale.h>
#include <Math.h>

float VAL(float x, int n, float t);

int main(){
		setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.

	printf("O Valor Presente � R$: %.2f\n\n", VAL(1200, 6, 3));
	
	return 0;
	system("PAUSE");
}


float VAL(float x, int n, float t){
	   float porc = t/100;
	   float resultado;
	   int i = 0;
	   for (i = 1; i <= n; i++){
		   resultado = resultado + ((x)/pow((1+(porc)),i));
	   }	
	   return resultado;
}