#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int num1, num2;
char op;

printf("Escreva uma expressão: ");
scanf("%d %c %d", &num1, &op, &num2);

switch (op){
	case '+' : 
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case '-' : 
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case '*' : 
	case 'x' :
	case 'X' :
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case '/'  : 
	case '\\' :
	case ':'  :	
		printf("%d : %d = %d\n", num1, num2, num1 / num2);
		break;
}


	return 0;
	system("PAUSE");
}
