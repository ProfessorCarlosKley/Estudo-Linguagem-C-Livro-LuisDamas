#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

char est_civil;

printf("Qual o estado civil? ");
est_civil = getchar();

if(est_civil == 's' || est_civil=='S')
	printf("Solteiro!");
else
	if(est_civil == 'c' || est_civil=='C')
	  printf("Casado!");
	else
		if(est_civil == 'd' || est_civil=='D')
	  	  printf("Divorciado!");
	  	else
			if(est_civil == 'v' || est_civil=='V')
	  	  	  printf("Viuvo!");	  	
	  	  	else
				printf("Estado Civil Inv�lido!");
				
printf("\n");

	return 0;
	system("PAUSE");
}
