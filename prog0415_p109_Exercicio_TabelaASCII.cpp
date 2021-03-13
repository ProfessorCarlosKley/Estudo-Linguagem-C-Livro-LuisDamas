#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
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
