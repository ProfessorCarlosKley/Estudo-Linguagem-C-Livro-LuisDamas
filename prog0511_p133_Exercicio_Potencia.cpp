#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>

float pot(float x, int n){
	float res;
	int i;
	for (i = 1, res=1.0; i<=n; i++)
		res *=x;
	
	return res;
}
int main(){
setlocale(LC_ALL, "Portuguese");
	
printf("%f %f %f", pot(2.0,4),pot(1.234,3), pot(3.0,0));
	return 0;
	system("PAUSE");
	
}

