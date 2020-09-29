#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>

int main(){
	
setlocale(LC_ALL, "Portuguese");
int a, b;

	printf("Indtroduza dois inteiros: ");
	scanf("%d%d", &a, &b);
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n", a, b, a%b);
	
	
	return 0;
	system("PAUSE");
}
