#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int x, y;

printf("Introduza dois inteiros: ");
scanf("%d%d", &x,&y);
printf("O resultado de %d == %d : %d\n",x,y, x==y);
printf("O resultado de %d > %d  : %d\n",x,y, x>y);
printf("O resultado de %d >= %d : %d\n",x,y, x>=y);
printf("O resultado de %d < %d  : %d\n",x,y, x<y);
printf("O resultado de %d <= %d : %d\n",x,y, x<=y);
printf("O resultado de %d != %d : %d\n",x,y, x!=y);

	return 0;
	system("PAUSE");
}
