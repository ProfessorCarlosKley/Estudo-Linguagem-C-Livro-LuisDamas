#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 
(p. 133)*/
#include <locale.h>
#include <time.h>

#define NUMS 49 //Total de números do jogo.
#define MIN_APOSTA 6 //Aposta mínima 6 números.
#define NUM_LIN 7 //Números que aparecem em cada linha no volante.

/*Declaração das Funções*/

void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n); // *v passagem por referência.
void Apresentar(int res[]);

/*Inicia o gerador de números aleatórios com um número que depende 
da hora que se executa a função.*/ 

void Inic_Random(){
	   long ultime;
	   time(&ultime);
	   /*
	   Esta função retorna a hora desde 00:00:00 UTC de 1º de janeiro de 1970 
	   carimbo de data / hora Unix) em segundos. Se second não for um ponteiro
	   nulo, o valor retornado também será armazenado no objeto apontado por
	   segundo.
	   */
	   srand((unsigned)ultime);
	   /*
	   Para fazer com que os valores gerados não se repitam precisamos usar a
	   função srand a fim de inicializar a função rand com um valor “semente” 
	   para que se produza um valor aleatório na faixa determinada. 
	   A função srand recebe um argumento do tipo inteiro sem sinal, ou seja
	   unsigned int.
	   */	
}
/*Iniciando com ZEROS o vetor de controle dos números selecionados...*/
void Inic(int v[NUMS]){
	int i;
	for(i=0; i<NUMS; i++)
		v[i]=0;
}

/*	Lê o nº de números a apostar. Aceita valores entre MIN_APOSTA e NUMS.
	Aceita o valor ZERO para indicar que se quer terminar o prog.*/
	
int Ler_Ns_Apostar(){
	
	int n;
	do{
		printf("Quantos números deseja apostar? (0 - Terminar): ");
		scanf("%d", &n);
	}//Fim do
	while ((n<MIN_APOSTA || n>NUMS) && n!=0);
	return n; 
}//Fim da Função Ler_Ns_Apostar

/*	Gera o número aleatório e coloca a respectiva posição do vetor com o valor
	1 que indica que esse número foi selecionado.*/
	
void Gerar(int *v, int n){
	   int i, indice;
	   for(i=1; i<n; i++)
	   {
	   	indice = rand()%NUMS; //Devolve número aleatório entre 0 e NUMS -1.
		   if (v[indice]==0) //Não foi selecionado.
		   	    v[indice]=1;
		   else				//Este número já tinha selecionado.
			   i--;			//Logo, incrementa o caontador para voltar a calcular
		   	   	   	   	   	//   mais uma vez o i-ésimo nº aleatório.     	   
			   }//Fim do laço
 	   	
	   } // Fim de Gerar	

/* Apresenta o formato do volante colocando XX nos números selecionados para aposta*/
	   
void Apresentar(int res[]){
	   int i;
	   for(i=0; i<NUMS; i++)
	   {
	   		if (res[i]==0)
	   			printf(" %2d", i+1);
	   		else
			   printf("  -");
		   	if ((i+1)%NUM_LIN==0) putchar('\n');   
	   	}//fim do laço.
	   	putchar('\n');
	}//Fim de Apresentar	   

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
	int vetor[NUMS];
	int n_nums; //Nº de números para apostar. 6..49.
	
	Inic_Random();
	
	while(1){
		Inic (vetor);
		if((n_nums = Ler_Ns_Apostar())==0) break;
		Gerar(vetor, n_nums); //Gerar os números a apostar.
		Apresentar(vetor);
	}
	   	   	   	
	return 0;
	system("PAUSE");
}