#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 

(p. 133)*/

#include <locale.h>
#define ESPACO ' '
#define DIM 3 /*Sem ponto-e-vírgula*/
/* - Uma função definida com consta existe fisicamente em uma posição de memória.
   - Definida com #define não existe fisicamente na memória. Seu valor é substituido
   		  ao longo do programa na fase de pré-processamento (antes da compilação.)
   - const faz parte das palavras reservadas de c.
   	   #define é uma diretiva que indica ao pré-processador que o símbolo que o segue
   	   vai ficar com o valor deois do símbolo. O pré-processador antes de compilar
   	   o programa, substitui todas as ocorrências do símbolo pelo valor que está definido.
   - Uma constante definida com const fica com o tipo que lhe foi colcado na definição.
   - O tipo definido com #define é o tipo que resulta da expressão que aparece no
   		componente valor.
   - Uma vez que #define não faz parte da linguagem C, essa lina não é seguida
        de ponto-e-vírgula.	p. 150 pdf.					   			  	
*/
void inic(char s[][DIM]) //Omite uma dimensão.
{
	int i, j;
	for (i=0; i<DIM; i++)
		for(j=0; j<DIM; j++)
			s[i][j]=ESPACO;
	
}

void mostra(char s[DIM][DIM]){ /*Ambas as Dimensões.*/
	 	int i, j;
	 		for (i=0; i<DIM; i++){
				 for(j=0; j<DIM; j++)
				 	printf("%c %c",s[i][j], j==DIM-1?' ':'|');
				 if (i!=DIM-1) printf("\n-----------");
				 putchar('\n');
			 }
}

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
	char Velha[DIM][DIM];
	int posx, posy;
	char ch = '0'; //Caractere para jogar.
	int n_jogadas = 0;
	
	inic(Velha);
	while(1) //Laço infinito;
	{
		mostra(Velha);
		printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
		scanf("%d %d", &posx, &posy);
		posx--; posy--; /*Os índices dos vetores começam em zero.*/
		if (Velha[posx][posy]==ESPACO)/*Casa Livre*/
		{
			Velha[posx][posy] = ch = (ch == '0')?'X':'0';
			n_jogadas++;
			
		}
		else
		{
			printf("Posicção já ocupada.\n Jogue Novamente!!\n");
		if (n_jogadas==DIM*DIM)
			break; /*Para o programa.*/ 	
		}
	}//Fim While
	
	mostra(Velha);
	
	   	   	
	return 0;
	system("PAUSE");
}