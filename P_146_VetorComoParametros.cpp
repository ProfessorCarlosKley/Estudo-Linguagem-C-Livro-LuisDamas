#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/

#include <locale.h>

void inic1(int s[10]){
	int i;
	for(i=0;i<10;i++)
		s[i]=0;
}

void inic2(int s[20]){
	int i;
	for (i=0; i<20;i++)
		s[i]=0;
}

int main(){
		setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
	int v[10]; //Vetor com 10 inteiros.
	int w[20]; //Vetor com 20 inteiros.
	int x;
		
	inic1(v); //inicia o vetor com todos elementos 0;
	inic2(w); //inicia o vetor com todos elementos 0;

	
	for(x=0;x<20;x++){
		   w[x]=(x*3);
	   }
	   
    for(x=0;x<20;x++){
		   printf("Vetor %d = %d\n",x, w[x]);
	   }
	return 0;
	system("PAUSE");
}