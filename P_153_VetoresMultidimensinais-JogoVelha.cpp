#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 133)*/

#include <locale.h>
#define DIM 3



int main(){
		setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.
char Velha[DIM][DIM]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
//Matriz 3x3;
int i, j;

Velha[0][0] = 'X';
Velha[1][1] = 'X';
Velha[0][2] = '0';
Velha[2][2] = '0';

for (i=0; i<DIM; i++){
	
	for(j=0; j<DIM; j++)
		printf(" %c %c", Velha[i][j], j==DIM-1?' ': '|');
	    if (i!=DIM-1) printf("\n-----------\n");	
	
}
	   	   
	   	
	return 0;
	system("PAUSE");
}