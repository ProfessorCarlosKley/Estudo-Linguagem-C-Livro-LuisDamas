#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, j, n;

printf("Introd. um número: ");
scanf("%d", &n);

for (i=1, j=n; i<=n; i++,j--){
	printf("%d \t %d\n", i ,j);
}
	return 0;
	system("PAUSE");
}
