#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>

int main(){
	
setlocale(LC_ALL, "Portuguese");
long int n_segundos;

	printf("Indtroduza o número de segundos: ");
	scanf("%ld", &n_segundos);
	
	printf("Horas       : %d\n", (int) n_segundos/3600);
	printf("Minutos     : %d\n", (int) (n_segundos%3600/60));
	printf("Segundos    : %d\n", (int) n_segundos % 60);
	
	return 0;
	system("PAUSE");
}
