#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

int x_toupper(char ch){
	if (ch >= 'a' && ch <= 'z') /*Se min�scula*/
		return ch + 'A' - 'a';
		
	else
		return ch; //Devolve a pr�pria
}
/* diferen�a entre um char (min�sulo) e outro igual (mai�sculo) � sempre 32.
logo, quando somo o char digitado (min�sculo) com a diferen�a 'A' - 'a', na 
verdade estou acrescentando ao c�digo ascii do char minusculo 32 que somado cai 
no ascci correspondente mai�sculo.*/
int main(){
setlocale(LC_ALL, "Portuguese");
	
	char c;
	while(1) //Termina com ctrl+c;
	{
		c=getchar();
		putchar(x_toupper(c));
	}
	return 0;
	system("PAUSE");
	
}

