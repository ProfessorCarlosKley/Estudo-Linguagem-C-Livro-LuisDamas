#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.

int main(){
	
char ch;
printf("Introduza um caractere: ");
ch = getchar();//l� caractere intoduzido pelo usu�rio e adiciona � vari�vel.
printf("O caractere introduzido foi '%c' \n", ch);

/*
A fun��o getchar � invocada sem qualquer par�metro. Ela l� um caractere e devolve
o caractere obtido como resultado da fun��o, evitando a escrita de par�metros, 
formatos, &ch etc.
Na verdade, ele simplifica o uso de scanf que aceita uma string, getchar apenas
l� um caractere enquanto scanf l� diversos formatos inclusive string.
- getchar � uma fun��o dedicada a leitura de caracteres, por isso n�o precisa de 
especificador de tipo, j� scanf � uma fun��o gen�rica que ler v�rios tipos.
*/


	return 0;
	system("PAUSE");
}
