#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

int main(){
setlocale(LC_ALL, "Portuguese");

int i, j, n;
char ch;

printf("Introd. um número: ");
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
