#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/

#include <locale.h>
#define DIM 3



int main(){
		setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
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