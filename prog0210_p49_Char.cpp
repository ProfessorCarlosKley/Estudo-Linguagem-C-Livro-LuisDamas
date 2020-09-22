#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.

int main(){
	
char ch;
printf("Introduza um caractere: ");
scanf("%c", &ch);
printf("O caractere introduzido foi '%c' \n", ch);
//as aspas simples em %c serve para imprimir a letra digitada entre aspas.


	return 0;
	system("PAUSE");
}
