#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

char est_civil;

printf("Qual estado civil? ");
scanf("%c", &est_civil);
//ou est_civil = getchar();

switch(est_civil){
	case 'C' : printf("Casado\n");
	case 'D' : printf("Divorciado\n");
	case 'S' : printf("Solteiro\n");
	case 'V' : printf("Viuvo\n");
	default : "Esado civil n�o informado...\n";
}

	return 0;
	system("PAUSE");
}
