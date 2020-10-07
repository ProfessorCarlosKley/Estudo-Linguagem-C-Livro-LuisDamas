#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int n_horas;
long res;
char tipo;

printf("Entre com o número de horas: ");
scanf("%d", &n_horas);
printf("Ebibir hora (h) min (m) seg (s): ");
scanf(" %c", &tipo);

if (tipo == 'm' || tipo == 'M')
	res = n_horas < 0 ? 0 : n_horas * 60L; //casting de consatnte.
else
	if (tipo == 's' || tipo == 'S')
		res = n_horas < 0 ? 0 : n_horas * 3600L; //casting de consatnte.
	else
		if (tipo == 'd' || tipo == 'D')
			res = n_horas < 0 ? 0 : n_horas * 36000L; //casting de consatnte.

printf("%dh -->  %ld%c ", n_horas, res, tipo);
//%dh short inteiro; %ld long inteiro - tabela da p. 56. 

	return 0;
	system("PAUSE");
}
