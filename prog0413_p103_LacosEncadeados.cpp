#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int i, j;

for (i=1; i<=10; i=i+1)
	{
		for(j=1; j<=i; j=j+1)
			printf("%d	", j);
		putchar('\n'); //imprime um caractere apenas.
	}

	return 0;
	system("PAUSE");

}

