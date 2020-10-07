#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int num1, num2, res=0;
char op;

printf("Escreva uma expressão: ");
scanf("%d %c %d", &num1, &op, &num2);

switch (op){
	case '+' : 
		res = num1+num2;
		break;
	case '-' : 
		res = num1-num2;
		break;
	case '*' : 
	case 'x' :
	case 'X' :
		res = num1*num2;
		break;
	case '/'  : 
	case '\\' :
	case ':'  :	
		res = num1/num2;
		break;
}
printf("%d %c %d = %d\n", num1, op, num2, res);


	return 0;
	system("PAUSE");
}
