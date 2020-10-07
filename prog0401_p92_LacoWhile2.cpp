#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


int n;
n=10;

while (n)
/*A condição de wile é representada pela própria variável n, isto é, a condição de while é verdadeira
quando na apresentar um valor que não seja zero (pois zero é Falso). Dessa forma, escrever while(n) ou
while(!=0) é exatamente o mesmo.*/

{
	printf("%d\n", n);
	n =n-1;
}
	return 0;
	system("PAUSE");
}
