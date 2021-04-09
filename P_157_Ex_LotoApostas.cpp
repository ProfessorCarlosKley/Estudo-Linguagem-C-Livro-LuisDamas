#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 
(p. 133)*/
#include <locale.h>
#include <time.h>

#define NUMS 49 //Total de n�meros do jogo.
#define MIN_APOSTA 6 //Aposta m�nima 6 n�meros.
#define NUM_LIN 7 //N�meros que aparecem em cada linha no volante.

/*Declara��o das Fun��es*/

void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n); // *v passagem por refer�ncia.
void Apresentar(int res[]);

/*Inicia o gerador de n�meros aleat�rios com um n�mero que depende 
da hora que se executa a fun��o.*/ 

void Inic_Random(){
	   long ultime;
	   time(&ultime);
	   /*
	   Esta fun��o retorna a hora desde 00:00:00 UTC de 1� de janeiro de 1970 
	   carimbo de data / hora Unix) em segundos. Se second n�o for um ponteiro
	   nulo, o valor retornado tamb�m ser� armazenado no objeto apontado por
	   segundo.
	   */
	   srand((unsigned)ultime);
	   /*
	   Para fazer com que os valores gerados n�o se repitam precisamos usar a
	   fun��o srand a fim de inicializar a fun��o rand com um valor �semente� 
	   para que se produza um valor aleat�rio na faixa determinada. 
	   A fun��o srand recebe um argumento do tipo inteiro sem sinal, ou seja
	   unsigned int.
	   */	
}
/*Iniciando com ZEROS o vetor de controle dos n�meros selecionados...*/
void Inic(int v[NUMS]){
	int i;
	for(i=0; i<NUMS; i++)
		v[i]=0;
}

/*	L� o n� de n�meros a apostar. Aceita valores entre MIN_APOSTA e NUMS.
	Aceita o valor ZERO para indicar que se quer terminar o prog.*/
	
int Ler_Ns_Apostar(){
	
	int n;
	do{
		printf("Quantos n�meros deseja apostar? (0 - Terminar): ");
		scanf("%d", &n);
	}//Fim do
	while ((n<MIN_APOSTA || n>NUMS) && n!=0);
	return n; 
}//Fim da Fun��o Ler_Ns_Apostar

/*	Gera o n�mero aleat�rio e coloca a respectiva posi��o do vetor com o valor
	1 que indica que esse n�mero foi selecionado.*/
	
void Gerar(int *v, int n){
	   int i, indice;
	   for(i=1; i<n; i++)
	   {
	   	indice = rand()%NUMS; //Devolve n�mero aleat�rio entre 0 e NUMS -1.
		   if (v[indice]==0) //N�o foi selecionado.
		   	    v[indice]=1;
		   else				//Este n�mero j� tinha selecionado.
			   i--;			//Logo, incrementa o caontador para voltar a calcular
		   	   	   	   	   	//   mais uma vez o i-�simo n� aleat�rio.     	   
			   }//Fim do la�o
 	   	
	   } // Fim de Gerar	

/* Apresenta o formato do volante colocando XX nos n�meros selecionados para aposta*/
	   
void Apresentar(int res[]){
	   int i;
	   for(i=0; i<NUMS; i++)
	   {
	   		if (res[i]==0)
	   			printf(" %2d", i+1);
	   		else
			   printf("  -");
		   	if ((i+1)%NUM_LIN==0) putchar('\n');   
	   	}//fim do la�o.
	   	putchar('\n');
	}//Fim de Apresentar	   

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.
	int vetor[NUMS];
	int n_nums; //N� de n�meros para apostar. 6..49.
	
	Inic_Random();
	
	while(1){
		Inic (vetor);
		if((n_nums = Ler_Ns_Apostar())==0) break;
		Gerar(vetor, n_nums); //Gerar os n�meros a apostar.
		Apresentar(vetor);
	}
	   	   	   	
	return 0;
	system("PAUSE");
}