#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 

(p. 133)*/

#include <locale.h>
#define ESPACO ' '
#define DIM 3 /*Sem ponto-e-v�rgula*/
/* - Uma fun��o definida com consta existe fisicamente em uma posi��o de mem�ria.
   - Definida com #define n�o existe fisicamente na mem�ria. Seu valor � substituido
   		  ao longo do programa na fase de pr�-processamento (antes da compila��o.)
   - const faz parte das palavras reservadas de c.
   	   #define � uma diretiva que indica ao pr�-processador que o s�mbolo que o segue
   	   vai ficar com o valor deois do s�mbolo. O pr�-processador antes de compilar
   	   o programa, substitui todas as ocorr�ncias do s�mbolo pelo valor que est� definido.
   - Uma constante definida com const fica com o tipo que lhe foi colcado na defini��o.
   - O tipo definido com #define � o tipo que resulta da express�o que aparece no
   		componente valor.
   - Uma vez que #define n�o faz parte da linguagem C, essa lina n�o � seguida
        de ponto-e-v�rgula.	p. 150 pdf.					   			  	
*/
void inic(char s[][DIM]) //Omite uma dimens�o.
{
	int i, j;
	for (i=0; i<DIM; i++)
		for(j=0; j<DIM; j++)
			s[i][j]=ESPACO;
	
}

void mostra(char s[DIM][DIM]){ /*Ambas as Dimens�es.*/
	 	int i, j;
	 		for (i=0; i<DIM; i++){
				 for(j=0; j<DIM; j++)
				 	printf("%c %c",s[i][j], j==DIM-1?' ':'|');
				 if (i!=DIM-1) printf("\n-----------");
				 putchar('\n');
			 }
}

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.
	char Velha[DIM][DIM];
	int posx, posy;
	char ch = '0'; //Caractere para jogar.
	int n_jogadas = 0;
	
	inic(Velha);
	while(1) //La�o infinito;
	{
		mostra(Velha);
		printf("\nIntroduza a Posi��o de Jogo Linha Coluna: ");
		scanf("%d %d", &posx, &posy);
		posx--; posy--; /*Os �ndices dos vetores come�am em zero.*/
		if (Velha[posx][posy]==ESPACO)/*Casa Livre*/
		{
			Velha[posx][posy] = ch = (ch == '0')?'X':'0';
			n_jogadas++;
			
		}
		else
		{
			printf("Posic��o j� ocupada.\n Jogue Novamente!!\n");
		if (n_jogadas==DIM*DIM)
			break; /*Para o programa.*/ 	
		}
	}//Fim While
	
	mostra(Velha);
	
	   	   	
	return 0;
	system("PAUSE");
}