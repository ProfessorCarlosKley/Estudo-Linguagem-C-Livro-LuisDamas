#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/

#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.

	float sal[12]; //12 meses;
	float total;
	int i;
	
	for (i = 0; i < 12; i++){
		printf("Introduza o salário do mês %d: ", i+1);
		scanf("%f", &sal[i]);
	}
	
	/*Mosra os valores Mensais e calcula Total....*/
	
	puts(" Mês           Valor ");
	
	for (i=0, total = 0.0; i<12; i++){
		printf(" %3d           %9.2f\n", i+1, sal[i]);
		total +=sal[i];
	}
	
	printf("Total Anual: %9.2f\n", total);
	return 0;
	system("PAUSE");
}