#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i;

for (i=0;i<=255;i++){
	printf("%3d -> %c\n", i,(char) i);
}	
	return 0;
	system("PAUSE");
}
