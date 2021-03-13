#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

int x_toupper(char ch){
	if (ch >= 'a' && ch <= 'z') /*Se minúscula*/
		return ch + 'A' - 'a';
		
	else
		return ch; //Devolve a própria
}
/* diferença entre um char (minúsulo) e outro igual (maiúsculo) é sempre 32.
logo, quando somo o char digitado (minúsculo) com a diferença 'A' - 'a', na 
verdade estou acrescentando ao código ascii do char minusculo 32 que somado cai 
no ascci correspondente maiúsculo.*/
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

