#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
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
				printf("Estado Civil Inválido!");
				
printf("\n");

	return 0;
	system("PAUSE");
}
