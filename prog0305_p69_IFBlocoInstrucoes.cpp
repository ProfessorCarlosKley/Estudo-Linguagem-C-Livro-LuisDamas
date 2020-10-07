#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int x, y, temp;

printf("Indtroduza dois números: ");
scanf("%d %d", &x, &y);

if (x>y)
{
	temp = x;
	x = y;
	y = temp;
} //Depois do fechamento de um bloco, não precisa por ;

printf("%d %d\n", x,y);

	return 0;
	system("PAUSE");
}
