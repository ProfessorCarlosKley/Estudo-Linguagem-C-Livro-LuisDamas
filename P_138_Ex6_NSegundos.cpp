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