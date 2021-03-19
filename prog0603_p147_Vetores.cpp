#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/

#include <locale.h>
void inic(int s[], int n){
	int i;
	for(i=0;i<n;i++)
		s[i]=i+1;

}

int main(){
		setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.

	   int v[10];
	   int w[20];
	   int i;
	   
	   inic[v,10];
       inic[w,20];
       
        for(i=0;i<10;i++){
		   v[i]=i;
	   }
	   	
	   for(i=10-1; i>0; i--){
		   printf("%d\n", v[i]);
	   }	
	    printf("\n\n");

	  for(i=0;i<20;i++){
		   w[i]=i+i;
	   }
	   	
	   for(i=0; i<20; i++){
		   printf("Vetor %d: %d\n",i,	 w[i]);
	   }
	return 0;
	system("PAUSE");
}