#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int i;

for (i = 1; i<=100; i=i+1)
	if (i==60)
		break;//escapa do la�o.
	else
		if(i%2==1) /*Se i for �mpar.- Resto da divis�o por 2 == 1, � �mpar.*/
			continue;//n�o escapa do la�o, apenas pula a instru��o.
		else
			printf("%2d ", i);

printf("\n\nFIM DO LA�O\n");
		
/*A instru��o continue s� pode ser utilizada dentro de la�os, enquanto o break pode ser 
utilizado em la�os ou na instru��o switch. p. 102 pdf*/


	return 0;
	system("PAUSE");

}

