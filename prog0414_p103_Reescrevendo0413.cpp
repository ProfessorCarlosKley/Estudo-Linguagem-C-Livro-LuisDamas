#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int i, j;

for (i=1; i<=10; i=i+1)
	{
		for(j=1; j<10; j=j+1){
			printf("%d - ", j);
			if (j==i)
				break;
		}
			
	}
putchar('\n');
	return 0;
	system("PAUSE");

}

