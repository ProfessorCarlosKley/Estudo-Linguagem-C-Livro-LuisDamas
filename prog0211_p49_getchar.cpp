#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.

int main(){
	
char ch;
printf("Introduza um caractere: ");
ch = getchar();//lê caractere intoduzido pelo usuário e adiciona à variável.
printf("O caractere introduzido foi '%c' \n", ch);

/*
A função getchar é invocada sem qualquer parâmetro. Ela lê um caractere e devolve
o caractere obtido como resultado da função, evitando a escrita de parâmetros, 
formatos, &ch etc.
Na verdade, ele simplifica o uso de scanf que aceita uma string, getchar apenas
lé um caractere enquanto scanf lê diversos formatos inclusive string.
- getchar é uma função dedicada a leitura de caracteres, por isso não precisa de 
especificador de tipo, já scanf é uma função genérica que ler vários tipos.
*/


	return 0;
	system("PAUSE");
}
