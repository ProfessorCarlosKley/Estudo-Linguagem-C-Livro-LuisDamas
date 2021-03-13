#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>

int main(){
setlocale(LC_ALL, "Portuguese");

int i, n;

printf("Introd. um número: ");
scanf("%d", &n);

for (i=n; ; i++){ //laço infinito
	if (i%10 == 0) /*Interrompe quando i for múltiplo de 10*/
		break;
		else
		if (i%3==0)
			continue; //ingora múltiplos de três
		printf("%d\n", i);
}
	return 0;
	system("PAUSE");
}
