#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int i, j;

for(i = 1; i<=5; i = i+1){
	
	for(j=1; j<=10; j = j + 1)
		printf("%2d * %2d = %2d\n", i, j, i*j);
		
		if (i!=5) /*para não parar na última*/
			{
				printf("Pressione <enter> para continuar");
				getchar(); //espera o pressionamento de uma tecla.
			}
	}

	return 0;
	system("PAUSE");
}
