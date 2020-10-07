#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
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
	printf("\n\n\n\t\tOpção:");
	scanf(" %c", &opcao);
	//fflush(stdin); //Limpar o buffer do teclado
	setbuf(stdin, NULL);
	//RECOMENADO NO LUGAR DE fflush nos vídeos do canal Linguagem c Programação Descomplicada
	//fflush é mais indicado para buffer de saida, não para buffer de entrada, no caso do teclado.
	//Ele pode ter comportamentos indefinidos no caso do teclado.
	//stdin é o buffer do teclado.
	
	switch(opcao)
	{
		case 'c':
		case 'C': puts("Opção CLIENTES"); break;
		case 'f':
		case 'F': puts("Opção FORNECEDORES"); break;
		case 'E':
		case 'e': puts("Opção ENCOMENDAS"); break;
		case 'S':
		case 's': break;
		default: puts("Opção INVÁLIDA!!!");		
	}
	getchar(); //parar a tela
	
 } while (opcao != 's' && opcao != 'S');

	return 0;
	system("PAUSE");
/*
fflush() A função fflush descarrega os buffers de saída de um fluxo de dados.
 Isto é, qualquer dado ainda não escrito no disco e guardado nos buffers temporários 
 de saída, é escrito. Com isso, o buffer é limpo.
 Quando usamos scanf ela recupera a informação do buffer. Porém, ela pode deixar sujeiras 
 no buffer, comprometendo futuras leituras.
*/

}

