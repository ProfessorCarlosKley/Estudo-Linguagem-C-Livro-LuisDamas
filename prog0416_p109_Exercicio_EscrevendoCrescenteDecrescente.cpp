#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, j, n;

printf("Introd. um n�mero: ");
scanf("%d", &n);

for (i=1, j=n; i<=n; i++,j--){
	printf("%d \t %d\n", i ,j);
}
	return 0;
	system("PAUSE");
}
