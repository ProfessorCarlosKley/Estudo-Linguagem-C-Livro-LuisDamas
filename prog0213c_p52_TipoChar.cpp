#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.
char ch;
	printf("Introduza um caractere: ");
	scanf("%c",  &ch);
	printf("O caractere '%c' tem o ASCII n� %d\n", ch, (int) ch);
	//o casting n�o de int (int) n�o � necess�rio... a pr�pria fun��o printf faz.
	
	return 0;
	system("PAUSE");
}
