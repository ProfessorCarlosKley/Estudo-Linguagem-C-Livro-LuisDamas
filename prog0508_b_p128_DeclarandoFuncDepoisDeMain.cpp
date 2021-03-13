#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

void linha(int num, char ch);//Protótipo de função. Declarada depois de ser chamada em main.
//Para contornar erro do compilador, uma vez que main chama a função que está declarada depois dela.
int main(){
setlocale(LC_ALL, "Portuguese");
//Para c essa chamada gera um erro, pois o compilador chama a função antes de encontrá-la
linha(3,'+');
linha(3,'+');
linha(7,'-');
linha(5,'+');
linha(3,'+');

	return 0;
	system("PAUSE");
	
}
void linha (int num, char ch){
	//em c, uma função que retorna void, é considerada um procedimento.
	int i;
	for (i = 1; i <= num; i++)
		putchar(ch);
	putchar('\n');
}
