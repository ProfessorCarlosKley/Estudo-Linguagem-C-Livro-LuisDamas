#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int n_horas;
long res;
char tipo;

printf("Entre com o n�mero de horas: ");
scanf("%d", &n_horas);
printf("Ebibir hora (h) min (m) seg (s): ");
scanf(" %c", &tipo);

switch (tipo)
{
	case 'm':
	case 'M':
		res = n_horas < 0 ? 0 : n_horas * 60L;
		break;
		
	case 's':
	case 'S':
		res = n_horas < 0 ? 0 : n_horas * 3600L;
		break;	
		
	case 'd':
	case 'D':
		res = n_horas < 0 ? 0 : n_horas * 36000L;
		break;	
}

printf ("%dh >>> %ld%c ", n_horas, res, tipo);

	return 0;
	system("PAUSE");
}
