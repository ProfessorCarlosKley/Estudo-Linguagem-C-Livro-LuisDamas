#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

int main(){
setlocale(LC_ALL, "Portuguese");

int i, n;

printf("Introd. um n�mero: ");
scanf("%d", &n);

for (i=n; ; i++){ //la�o infinito
	if (i%10 == 0) /*Interrompe quando i for m�ltiplo de 10*/
		break;
		else
		if (i%3==0)
			continue; //ingora m�ltiplos de tr�s
		printf("%d\n", i);
}
	return 0;
	system("PAUSE");
}
