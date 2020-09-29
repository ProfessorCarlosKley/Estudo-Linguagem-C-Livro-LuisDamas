#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
char ch;
	printf("Introduza um caractere: ");
	scanf("%c",  &ch);
	printf("O caractere '%c' tem o ASCII nº %d\n", ch, (int) ch);
	//o casting não de int (int) não é necessário... a própria função printf faz.
	
	return 0;
	system("PAUSE");
}
