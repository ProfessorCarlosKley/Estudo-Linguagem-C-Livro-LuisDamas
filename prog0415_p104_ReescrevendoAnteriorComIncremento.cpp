#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i;
i = 1;
while (i<=10){
	printf("%d\n", i);
	i++;
}
	return 0;
	system("PAUSE");
}
