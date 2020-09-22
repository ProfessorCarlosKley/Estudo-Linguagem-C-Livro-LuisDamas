#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.

- Como não é uma instrução de C, não vem seguida de (;) 

(p. 21-22)*/

int main(){

short int idade; //ou short idade, para garantirmos que idade use apenas 2 bytes de memória;
int montante;
long int n_conta;//ou long n_conta, para garatirmos que n_conta use 4 bytes de memória.

printf("Qual sua idade: "); scanf("%hd",&idade);
printf("Qual o montante a depositar: "); scanf("%d", &montante);
printf("Qual o numero da conta: "); scanf("\%1d", &n_conta);

printf("Uma pessoa de %hd anos depositou $%d na conta %1d\n", idade, montante, n_conta);



	return 0;
	system("PAUSE");
}
