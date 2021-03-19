#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 133)*/

#include <locale.h>

const int num = 10;
/* - Uma fun��o definida com consta existe fisicamente em uma posi��o de mem�ria.
   - Definida com #define n�o existe fisicamente na mem�ria. Seu valor � substituido
   		  ao longo do programa na fase de pr�-processamento (antes da compila��o.)
   - const faz parte das palavras reservadas de c.
   	   #define � uma diretiva que indica ao pr�-processador que o s�mbolo que o segue
   	   vai ficar com o valor deois do s�mbolo. O pr�-processador antes de compilar
   	   o programa, substitui todas as ocorr�ncias do s�mbolo pelo valor que est� definido.
   - Uma constante definida com const fica com o tipo que lhe foi colcado na defini��o.
   - O tipo definido com #define � o tipo que resulta da express�o que aparece no
   		componente valor.
   - Uma vez que #define n�o faz parte da linguagem C, essa lina n�o � seguida
        de ponto-e-v�rgula.		p. 150 pdf.					   			  	
*/ 
void inic(int s[]){
	int i;
	for(i=0; i<num; i++){
		s[i]=0; //iniciando elementos com valor 0
	}
	
}
int main(){
		setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.
	int v[num], i;
	
		   for(i=0;i<10;i++){
		   v[i]=i;
	   }
	   	
	   for(i=num-1; i>0; i--){
		   printf("%d\n", v[i]);
	   }	
	   	   
	   	
	return 0;
	system("PAUSE");
}