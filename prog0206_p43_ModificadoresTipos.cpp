#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.

- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 21-22)*/

int main(){

short int idade; //ou short idade, para garantirmos que idade use apenas 2 bytes de mem�ria;
int montante;
long int n_conta;//ou long n_conta, para garatirmos que n_conta use 4 bytes de mem�ria.

printf("Qual sua idade: "); scanf("%hd",&idade);
printf("Qual o montante a depositar: "); scanf("%d", &montante);
printf("Qual o numero da conta: "); scanf("\%1d", &n_conta);

printf("Uma pessoa de %hd anos depositou $%d na conta %1d\n", idade, montante, n_conta);



	return 0;
	system("PAUSE");
}
