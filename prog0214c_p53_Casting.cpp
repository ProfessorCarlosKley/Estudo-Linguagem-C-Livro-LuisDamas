#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.
int num;
	printf("Introduza um caractere: ");
	scanf("%d",  &num);
	printf("Foi introduzido %d cujo caractere = '%c' \n", num, char(num));
	printf("O caractere seguinte = '%c tem o ASCII n� %d\n", char(num+1), num+1);
	//o casting n�o de int (int) n�o � necess�rio... a pr�pria fun��o printf faz.
	//O casting � tempor�rio. N�o altera vari�vel original.
	return 0;
	system("PAUSE");
}
