#include <stdlib.h> //system est� nessa biblioteca. system("PAUSE");
#include <stdio.h> //standard input/output. Permite acesso � todas as fun��es de entrada e sa�da norais.
/*As linhas include, mas sim uma diretiva que indica ao compilador (mais propriamente ao pr�-processador)
que dever� adicinar ao processo de compila��o um arquivo exitente em alguma parte do disco do seu computador
chamado stdio.h, de forma que o cmpilador tenha acesso a um conjunto de informa��es sobre �s fun��es que
vir� a utilizar.
- Como n�o � uma instru��o de C, n�o vem seguida de (;) 
(p. 133)*/
#include <locale> 

void tiro(int x);
void liro(int x);

int main(){
	setlocale(LC_ALL, "Portuguese"); //Configura��o para acentua��o.
	//LC_ALL diz que � para aplicar essa configura��o a tudo, n�o s� a string.
	printf("-----Sa�da de tiro(1)----- ");
	tiro(1); printf("\n\n");
	/*
	- Ao invocar tiro com argumento 1, o switch entre pelo case 1.
	- Como case 1 n�o tem break, continua pelo pr�xima case (case 2);
	- Em seguida, aparece a instru��o return, que termina a execu��o da fun��o.
	*/
	printf("-----Sa�da de tiro(3)----- ");
	tiro(3);printf("\n\n");
	/*
	- Ao invoca tiro com argumento 3, o switch entre pelo case 3.
	- Na sequ�ncia invoca a fun��o com valor x = 3 deopis que implementa x++.
	- A fun��o liro aciona o case 3;
	*/
	printf("-----Sa�da de liro(2)----- ");
	liro(2);printf("\n\n");
	/*
	- Neste caso a primeira instru��o � return que termina imediatamente a fun��o.
	*/
	printf("-----Sa�da de liro(4)----- ");
	liro(4);printf("\n\n");
	/*
	- Entra pelo case 4 e escreve mensagem.
	- Em seguida chama a pr�pria fun��o liro(2).
	- Como visto anteriormente liro(2) n�o produz qualquer saida.
	*/
	printf("-----Sa�da de liro(5)----- \n");
	printf("Entra em loop infinito por n�o existir case 5... Desabilitado.");
		printf("\n\n");
	// liro(5);printf("\n\n");
	/*
	- Case 5 n�o existe, logo o c�digo ser� o seguinte, o do default.
	- Neste caso exibirar a mensagem do default e sempre chamar� ela mesma com 
	  o valor de x liro(x). Neste caso igual a 5. Portanto entrar� em loop infinito.
	- Como visto anteriormente liro(2) n�o produz qualquer saida.
	*/
	
	return 0;
	system("PAUSE");
}

	void tiro(int x){
	switch (x)
	{
		case 1: printf("\n Este teste � mesmo f�cil");
		case 2: printf("\n Ai de quem diga o contr�rio...");
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
		case 4: printf("\n N�o percebe nada disto.");
		liro(2);
		return;
		default: printf("\n Aqui estou eu mais uma vez");
		tiro(x--);
	}
	
}
