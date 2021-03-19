#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 133)*/

#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.

	float sal[12]; //12 meses;
	float total;
	int i;
	
	for (i = 0; i < 12; i++){
		printf("Introduza o sal�rio do m�s %d: ", i+1);
		scanf("%f", &sal[i]);
	}
	
	/*Mosra os valores Mensais e calcula Total....*/
	
	puts(" M�s           Valor ");
	
	for (i=0, total = 0.0; i<12; i++){
		printf(" %3d           %9.2f\n", i+1, sal[i]);
		total +=sal[i];
	}
	
	printf("Total Anual: %9.2f\n", total);
	return 0;
	system("PAUSE");
}