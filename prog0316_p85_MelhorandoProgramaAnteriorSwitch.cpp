#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int num1, num2, res=0;
char op;

printf("Escreva uma express�o: ");
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
