#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

int main(){
setlocale(LC_ALL, "Portuguese");

int i, j, n;
char ch;

printf("Introd. um n�mero: ");
scanf("%d", &n);
printf("Introd. um char: ");
scanf(" %c", &ch);

for (i=1; i<=n; i++){
		for(j=1; j<=n; j++)
			putchar(ch);
		putchar('\n');
		
}
	return 0;
	system("PAUSE");
}
