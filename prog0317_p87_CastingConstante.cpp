#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int n_horas;
long n_seg; //o n�mero de segundos pode ser muito grande.
printf("N� horas: ");
scanf("%d", &n_horas);

n_seg = n_horas < 0 ? 0 : n_horas *3600L;
/*O L no final de 3600 faz um casting para long na constante.
Escolhemos a constante 3600 para promover a long. Essa promo��o pode ser realizada atrav�s
de (long) 3600 ou colocando L imediatamente ap�s a constante.
- Esse tipo de casting s� pode ser realizado com constante. Para vari�veis teremos que usar
o casting normal (long) var, pois um L junto ao nome da vari�vel iria alterar o nome desta.
	TAMB�M UTILIZADO NO JAVA.

P�gina 87 pdf, 76 do f�sico. 

*/
printf("%d Horas tme %1d segundos\n", n_horas, n_seg);



	return 0;
	system("PAUSE");
}
