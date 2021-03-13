#include <stdlib.h> //system está nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso à todas as funções de entrada e saída norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pré-processador)
que deverá adicinar ao processo de compilação um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informações sobre às funções que
virá a utilizar.
- Como não é uma instrução de C, não vem seguida de (;) 
(p. 133)*/
#include <locale> 

void tiro(int x);
void liro(int x);

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configuração para acentuação.
	//LC_ALL diz que é para aplicar essa configuração a tudo, não só a string.
	printf("-----Saída de tiro(1)----- ");
	tiro(1); printf("\n\n");
	/*
	- Ao invocar tiro com argumento 1, o switch entre pelo case 1.
	- Como case 1 não tem break, continua pelo próxima case (case 2);
	- Em seguida, aparece a instrução return, que termina a execução da função.
	*/
	printf("-----Saída de tiro(3)----- ");
	tiro(3);printf("\n\n");
	/*
	- Ao invoca tiro com argumento 3, o switch entre pelo case 3.
	- Na sequência invoca a função com valor x = 3 deopis que implementa x++.
	- A função liro aciona o case 3;
	*/
	printf("-----Saída de liro(2)----- ");
	liro(2);printf("\n\n");
	/*
	- Neste caso a primeira instrução é return que termina imediatamente a função.
	*/
	printf("-----Saída de liro(4)----- ");
	liro(4);printf("\n\n");
	/*
	- Entra pelo case 4 e escreve mensagem.
	- Em seguida chama a própria função liro(2).
	- Como visto anteriormente liro(2) não produz qualquer saida.
	*/
	printf("-----Saída de liro(5)----- \n");
	printf("Entra em loop infinito por não existir case 5... Desabilitado.");
		printf("\n\n");
	// liro(5);printf("\n\n");
	/*
	- Case 5 não existe, logo o código será o seguinte, o do default.
	- Neste caso exibirar a mensagem do default e sempre chamará ela mesma com 
	  o valor de x liro(x). Neste caso igual a 5. Portanto entrará em loop infinito.
	- Como visto anteriormente liro(2) não produz qualquer saida.
	*/
	
	return 0;
	system("PAUSE");
}

	void tiro(int x){
	switch (x)
	{
		case 1: printf("\n Este teste é mesmo fácil");
		case 2: printf("\n Ai de quem diga o contrário...");
		return; 
		case 3: printf("\n Estou no tiro e x = %d",x);
		liro(x++);
		break;
		printf("\n Vou sair do tiro...");
		default: printf("\n Entrei pelo default");
		liro(x);
	}
}

void liro(int x)
{
	switch (x)
	{
		case 2: return; printf("\n Entrei pelo liro(2)...\n");
		break;
		case 3: printf("\n Eu percebo HIMALATAS de C");
		break;
	   	printf("\n Sou mesmo bom!!!");
		break;
		case 4: printf("\n Não percebe nada disto.");
		liro(2);
		return;
		default: printf("\n Aqui estou eu mais uma vez");
		tiro(x--);
	}
	
}
