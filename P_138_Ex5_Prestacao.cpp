#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.

- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/
#include <locale.h>
#include <Math.h>

float VAL(float x, int n, float t);

int main(){
		setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.

	printf("O Valor Presente é R$: %.2f\n\n", VAL(1200, 6, 3));
	
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