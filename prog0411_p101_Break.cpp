#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int i;

for (i = 1; i<=100; i=i+1)
	if (i==30)
		break;//escapa 	do corpo do la�o...
	else
		printf("%2d ", 2*i);

printf("\n\nFIM DO LA�O\n");
		

	return 0;
	system("PAUSE");

}

