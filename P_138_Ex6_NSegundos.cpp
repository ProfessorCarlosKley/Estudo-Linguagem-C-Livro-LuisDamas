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
	
	int horas, minutos, segundos, t1=0, t2=0,total=0;
	
	printf("Insira a hora: ");
	scanf("%i", &horas);
	printf("Digite os minutos: ");
	scanf("%i", &minutos);
	printf("Digite os segundos: ");
	scanf("%i", &segundos);
	
	t1 = horas * 3600;
	t2 = minutos * 60;
	total = t1 + t2 + segundos;
	
	printf("Total de segundos: %d", total);
	
	return 0;
	system("PAUSE");
}