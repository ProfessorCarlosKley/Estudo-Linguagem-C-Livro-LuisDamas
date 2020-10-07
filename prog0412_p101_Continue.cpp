#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int i;

for (i = 1; i<=100; i=i+1)
	if (i==60)
		break;//escapa do laço.
	else
		if(i%2==1) /*Se i for ímpar.- Resto da divisão por 2 == 1, é ímpar.*/
			continue;//não escapa do laço, apenas pula a instrução.
		else
			printf("%2d ", i);

printf("\n\nFIM DO LAÇO\n");
		
/*A instrução continue só pode ser utilizada dentro de laços, enquanto o break pode ser 
utilizado em laços ou na instrução switch. p. 102 pdf*/


	return 0;
	system("PAUSE");

}

