#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int i, j;

for(i = 1; i<=5; i = i+1){
	
	for(j=1; j<=10; j = j + 1)
		printf("%2d * %2d = %2d\n", i, j, i*j);
		
		if (i!=5) /*para n�o parar na �ltima*/
			{
				printf("Pressione <enter> para continuar");
				getchar(); //espera o pressionamento de uma tecla.
			}
	}

	return 0;
	system("PAUSE");
}
