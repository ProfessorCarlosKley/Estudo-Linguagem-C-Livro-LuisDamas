#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 133)*/

#include <locale.h>
void inic(int s[]){
	int i;
	for(i=0;i<10;i++)
		s[i]=0;

}

int main(){
		setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.

	   int v[10], i;
		  	   
	   inic(v);
	   	
	   for(i=0;i<10;i++){
		   v[i]=i;
	   }
	   	
	   for(i=10-1; i>0; i--){
		   printf("%d\n", v[i]);
	   }	
	return 0;
	system("PAUSE");
}