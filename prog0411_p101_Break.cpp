#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int i;

for (i = 1; i<=100; i=i+1)
	if (i==30)
		break;//escapa 	do corpo do laço...
	else
		printf("%2d ", 2*i);

printf("\n\nFIM DO LAÇO\n");
		

	return 0;
	system("PAUSE");

}

