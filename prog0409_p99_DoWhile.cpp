#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
#include <locale>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");


char opcao;

do {
	printf("\t M E N U   P R I N C I P A L\n");
	printf("\n\n\t\tClientes");
	printf("\n\n\t\tFornecedores");
	printf("\n\n\t\tEncomenda");
	printf("\n\n\t\tSair");
	printf("\n\n\n\t\tOp��o:");
	scanf(" %c", &opcao);
	//fflush(stdin); //Limpar o buffer do teclado
	setbuf(stdin, NULL);
	//RECOMENADO NO LUGAR DE fflush nos v�deos do canal Linguagem c Programa��o Descomplicada
	//fflush � mais indicado para buffer de saida, n�o para buffer de entrada, no caso do teclado.
	//Ele pode ter comportamentos indefinidos no caso do teclado.
	//stdin � o buffer do teclado.
	
	switch(opcao)
	{
		case 'c':
		case 'C': puts("Op��o CLIENTES"); break;
		case 'f':
		case 'F': puts("Op��o FORNECEDORES"); break;
		case 'E':
		case 'e': puts("Op��o ENCOMENDAS"); break;
		case 'S':
		case 's': break;
		default: puts("Op��o INV�LIDA!!!");		
	}
	getchar(); //parar a tela
	
 } while (opcao != 's' && opcao != 'S');

	return 0;
	system("PAUSE");
/*
fflush() A fun��o fflush descarrega os buffers de sa�da de um fluxo de dados.
 Isto �, qualquer dado ainda n�o escrito no disco e guardado nos buffers tempor�rios 
 de sa�da, � escrito. Com isso, o buffer � limpo.
 Quando usamos scanf ela recupera a informa��o do buffer. Por�m, ela pode deixar sujeiras 
 no buffer, comprometendo futuras leituras.
*/

}

