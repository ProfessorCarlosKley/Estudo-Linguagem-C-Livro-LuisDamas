#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
int num;
	printf("Introduza um caractere: ");
	scanf("%d",  &num);
	printf("Foi introduzido %d cujo caractere = '%c' \n", num, char(num));
	printf("O caractere seguinte = '%c tem o ASCII nº %d\n", char(num+1), num+1);
	//o casting não de int (int) não é necessário... a própria função printf faz.
	//O casting é temporário. Não altera variável original.
	return 0;
	system("PAUSE");
}
