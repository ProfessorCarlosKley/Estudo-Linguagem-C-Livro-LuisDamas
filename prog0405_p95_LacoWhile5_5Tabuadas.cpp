#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int n, num;
num = 1;


while (num <=9) //5 tabuadas...
{
	n = 1;
	while(n<=10)
		{
			printf("%2d * %2d = %2d\n", num, n, num * n);
			n = n+1;
		}
num = num + 1;
putchar('\n'); 
//recebe um caractere e coloca na tela. sta fun��o � 
//uma maneira simplificada de se mostrar um �nico caractere na tela.
}
	return 0;
	system("PAUSE");
}
