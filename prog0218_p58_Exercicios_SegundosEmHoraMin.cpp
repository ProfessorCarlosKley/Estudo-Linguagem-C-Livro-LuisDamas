#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>

int main(){
	
setlocale(LC_ALL, "Portuguese");
long int n_segundos;

	printf("Indtroduza o n�mero de segundos: ");
	scanf("%ld", &n_segundos);
	
	printf("Horas       : %d\n", (int) n_segundos/3600);
	printf("Minutos     : %d\n", (int) (n_segundos%3600/60));
	printf("Segundos    : %d\n", (int) n_segundos % 60);
	
	return 0;
	system("PAUSE");
}
