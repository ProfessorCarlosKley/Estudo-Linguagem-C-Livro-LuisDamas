#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int n_horas;
long n_seg; //o número de segundos pode ser muito grande.
printf("Nº horas: ");
scanf("%d", &n_horas);

n_seg = n_horas < 0 ? 0 : n_horas *3600L;
/*O L no final de 3600 faz um casting para long na constante.
Escolhemos a constante 3600 para promover a long. Essa promoção pode ser realizada através
de (long) 3600 ou colocando L imediatamente após a constante.
- Esse tipo de casting só pode ser realizado com constante. Para variáveis teremos que usar
o casting normal (long) var, pois um L junto ao nome da variável iria alterar o nome desta.
	TAMBÉM UTILIZADO NO JAVA.

Página 87 pdf, 76 do físico. 

*/
printf("%d Horas tme %1d segundos\n", n_horas, n_seg);



	return 0;
	system("PAUSE");
}
