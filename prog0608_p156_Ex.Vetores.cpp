#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/

#include <locale.h>
const int n = 10;

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
	float v[n];
	int i;
	for (i=0; i<n; i++)
		v[i] = i*(n-1); /*Sempre multiplicará o valor de i por 9/
	
	for (i=0; i<n; i++)
		printf("%f\n", v[i]);	
	   	
	return 0;
	system("PAUSE");
}